//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#include <backendsCommon/test/EndToEndTestImpl.hpp>
#include <backendsCommon/test/MergerTestImpl.hpp>

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(NeonEndToEnd)

std::vector<armnn::BackendId> defaultBackends = {armnn::Compute::CpuAcc};

BOOST_AUTO_TEST_CASE(ConstantUsage_Neon_Float32)
{
    BOOST_TEST(ConstantUsageFloat32Test(defaultBackends));
}

BOOST_AUTO_TEST_CASE(FallbackToCpuRef)
{
    using namespace armnn;

    // Create runtime in which test will run and allow fallback to CpuRef.
    IRuntime::CreationOptions options;
    IRuntimePtr runtime(IRuntime::Create(options));

    // Builds up the structure of the network.
    INetworkPtr net(INetwork::Create());

    IConnectableLayer* input = net->AddInputLayer(0);

    // This layer configuration isn't supported by CpuAcc but we allow fallback to CpuRef so it shoud pass.
    NormalizationDescriptor descriptor;
    IConnectableLayer* pooling = net->AddNormalizationLayer(descriptor);

    IConnectableLayer* output = net->AddOutputLayer(0);

    input->GetOutputSlot(0).Connect(pooling->GetInputSlot(0));
    pooling->GetOutputSlot(0).Connect(output->GetInputSlot(0));

    input->GetOutputSlot(0).SetTensorInfo(TensorInfo({ 1, 1, 4, 4 }, DataType::Float32));
    pooling->GetOutputSlot(0).SetTensorInfo(TensorInfo({ 1, 1, 4, 4 }, DataType::Float32));

    // optimize the network
    std::vector<BackendId> backends = {Compute::CpuAcc, Compute::CpuRef};
    IOptimizedNetworkPtr optNet = Optimize(*net, backends, runtime->GetDeviceSpec());

    // Load it into the runtime. It should pass.
    NetworkId netId;
    BOOST_TEST(runtime->LoadNetwork(netId, std::move(optNet)) == Status::Success);
}

BOOST_AUTO_TEST_CASE(NeonMergerEndToEndDim0Test)
{
    MergerDim0EndToEnd<float>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(NeonMergerEndToEndDim0Uint8Test)
{
    MergerDim0EndToEnd<uint8_t>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(NeonMergerEndToEndDim1Test)
{
    MergerDim1EndToEnd<float>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(NeonMergerEndToEndDim1Uint8Test)
{
    MergerDim1EndToEnd<uint8_t>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(NeonMergerEndToEndDim3Test)
{
    MergerDim3EndToEnd<float>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(NeonMergerEndToEndDim3Uint8Test)
{
    MergerDim3EndToEnd<uint8_t>(defaultBackends);
}

BOOST_AUTO_TEST_SUITE_END()
