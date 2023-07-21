//
// Copyright © 2017,2022 Arm Ltd and Contributors. All rights reserved.
// SPDX-License-Identifier: MIT
//

#include <armnn/backends/ITensorHandle.hpp>
#include <armnnTestUtils/TensorCopyUtils.hpp>
#include <Half.hpp>

void CopyDataToITensorHandle(armnn::ITensorHandle* tensorHandle, const void* memory)
{
    tensorHandle->CopyInFrom(memory);
}

void CopyDataFromITensorHandle(void* memory, const armnn::ITensorHandle* tensorHandle)
{
    tensorHandle->CopyOutTo(memory);
}

void AllocateAndCopyDataToITensorHandle(armnn::ITensorHandle* tensorHandle, const void* memory)
{
    tensorHandle->Allocate();
    CopyDataToITensorHandle(tensorHandle, memory);
}
