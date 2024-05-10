//
// Copyright © 2022 Arm Ltd and Contributors. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include <armnnTestUtils/LayerTestResult.hpp>

#include <ResolveType.hpp>

#include <armnn/backends/IBackendInternal.hpp>
#include <armnn/backends/WorkloadFactory.hpp>

template<armnn::DataType ArmnnType, typename T = armnn::ResolveType<ArmnnType>>
LayerTestResult<T, 2> Sqrt2dTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    const armnn::ITensorHandleFactory& tensorHandleFactory);

template<armnn::DataType ArmnnType, typename T = armnn::ResolveType<ArmnnType>>
LayerTestResult<T, 3> Sqrt3dTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    const armnn::ITensorHandleFactory& tensorHandleFactory);

template<armnn::DataType ArmnnType, typename T = armnn::ResolveType<ArmnnType>>
LayerTestResult<T, 2> SqrtZeroTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    const armnn::ITensorHandleFactory& tensorHandleFactory);

template<armnn::DataType ArmnnType, typename T = armnn::ResolveType<ArmnnType>>
LayerTestResult<T, 2> SqrtNegativeTest(
    armnn::IWorkloadFactory& workloadFactory,
    const armnn::IBackendInternal::IMemoryManagerSharedPtr& memoryManager,
    const armnn::ITensorHandleFactory& tensorHandleFactory);
