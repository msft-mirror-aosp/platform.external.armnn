//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#include <backendsCommon/test/EndToEndTestImpl.hpp>
#include <backendsCommon/test/MergerTestImpl.hpp>

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(ClEndToEnd)

std::vector<armnn::BackendId> defaultBackends = {armnn::Compute::GpuAcc};

BOOST_AUTO_TEST_CASE(ConstantUsage_Cl_Float32)
{
    ConstantUsageFloat32Test(defaultBackends);
}

BOOST_AUTO_TEST_CASE(ClMergerEndToEndDim0Test)
{
    MergerDim0EndToEnd<float>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(ClMergerEndToEndDim0Uint8Test)
{
    MergerDim0EndToEnd<uint8_t>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(ClMergerEndToEndDim1Test)
{
    MergerDim1EndToEnd<float>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(ClMergerEndToEndDim1Uint8Test)
{
    MergerDim1EndToEnd<uint8_t>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(ClMergerEndToEndDim3Test)
{
    MergerDim3EndToEnd<float>(defaultBackends);
}

BOOST_AUTO_TEST_CASE(ClMergerEndToEndDim3Uint8Test)
{
    MergerDim3EndToEnd<uint8_t>(defaultBackends);
}

BOOST_AUTO_TEST_SUITE_END()
