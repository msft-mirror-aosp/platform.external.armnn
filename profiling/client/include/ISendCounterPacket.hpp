//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include "CounterValue.hpp"

#include <common/include/ICounterDirectory.hpp>

namespace arm
{

namespace pipe
{

class ISendCounterPacket
{
public:
    using IndexValuePairsVector = std::vector<CounterValue>;

    virtual ~ISendCounterPacket() {}

    /// Create and write a StreamMetaDataPacket in the buffer
    virtual void SendStreamMetaDataPacket() = 0;

    /// Create and write a CounterDirectoryPacket from the parameters to the buffer.
    virtual void SendCounterDirectoryPacket(const ICounterDirectory& counterDirectory) = 0;

    /// Create and write a PeriodicCounterCapturePacket from the parameters to the buffer.
    virtual void SendPeriodicCounterCapturePacket(uint64_t timestamp, const IndexValuePairsVector& values) = 0;

    /// Create and write a PeriodicCounterSelectionPacket from the parameters to the buffer.
    virtual void SendPeriodicCounterSelectionPacket(uint32_t capturePeriod,
                                                    const std::vector<uint16_t>& selectedCounterIds) = 0;
};

} // namespace pipe

} // namespace arm
