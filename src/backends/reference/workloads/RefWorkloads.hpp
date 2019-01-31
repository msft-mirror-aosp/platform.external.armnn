//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include "ElementwiseFunction.hpp"
#include "RefElementwiseWorkload.hpp"
#include "ConvImpl.hpp"
#include "RefConstantWorkload.hpp"
#include "RefConvolution2dUint8Workload.hpp"
#include "RefSplitterUint8Workload.hpp"
#include "RefResizeBilinearUint8Workload.hpp"
#include "RefL2NormalizationFloat32Workload.hpp"
#include "RefActivationUint8Workload.hpp"
#include "RefPooling2dFloat32Workload.hpp"
#include "RefWorkloadUtils.hpp"
#include "RefMergerUint8Workload.hpp"
#include "RefFullyConnectedFloat32Workload.hpp"
#include "RefGatherWorkload.hpp"
#include "Softmax.hpp"
#include "RefMergerFloat32Workload.hpp"
#include "TensorBufferArrayView.hpp"
#include "RefBatchNormalizationFloat32Workload.hpp"
#include "Splitter.hpp"
#include "RefFullyConnectedUint8Workload.hpp"
#include "RefReshapeFloat32Workload.hpp"
#include "RefDepthwiseConvolution2dUint8Workload.hpp"
#include "FullyConnected.hpp"
#include "Gather.hpp"
#include "RefFloorFloat32Workload.hpp"
#include "RefSoftmaxFloat32Workload.hpp"
#include "RefSoftmaxUint8Workload.hpp"
#include "RefReshapeUint8Workload.hpp"
#include "RefResizeBilinearFloat32Workload.hpp"
#include "RefBatchNormalizationUint8Workload.hpp"
#include "ResizeBilinear.hpp"
#include "RefNormalizationFloat32Workload.hpp"
#include "RefDepthwiseConvolution2dFloat32Workload.hpp"
#include "RefDetectionPostProcessFloat32Workload.hpp"
#include "RefDetectionPostProcessUint8Workload.hpp"
#include "RefPooling2dUint8Workload.hpp"
#include "BatchNormImpl.hpp"
#include "Activation.hpp"
#include "Merger.hpp"
#include "RefSpaceToBatchNdWorkload.hpp"
#include "RefSplitterFloat32Workload.hpp"
#include "RefStridedSliceWorkload.hpp"
#include "RefActivationFloat32Workload.hpp"
#include "RefConvolution2dFloat32Workload.hpp"
#include "Pooling2d.hpp"
#include "RefFakeQuantizationFloat32Workload.hpp"
#include "RefPermuteWorkload.hpp"
#include "RefLstmFloat32Workload.hpp"
#include "RefConvertFp16ToFp32Workload.hpp"
#include "RefConvertFp32ToFp16Workload.hpp"
#include "RefMeanUint8Workload.hpp"
#include "RefMeanFloat32Workload.hpp"
#include "RefPadWorkload.hpp"
#include "RefBatchToSpaceNdUint8Workload.hpp"
#include "RefBatchToSpaceNdFloat32Workload.hpp"
#include "RefDebugWorkload.hpp"
#include "RefRsqrtFloat32Workload.hpp"
#include "RefComparisonWorkload.hpp"
