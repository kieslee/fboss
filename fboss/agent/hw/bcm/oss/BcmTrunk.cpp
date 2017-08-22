/*
 *  Copyright (c) 2004-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#include "fboss/agent/hw/bcm/BcmTrunk.h"

namespace facebook {
namespace fboss {

BcmTrunk::~BcmTrunk() {}
void BcmTrunk::init(const std::shared_ptr<AggregatePort>& /*aggPort*/) {}
void BcmTrunk::program(
    const std::shared_ptr<AggregatePort>& /*oldAggPort*/,
    const std::shared_ptr<AggregatePort>& /*newAggPort*/) {}
void BcmTrunk::modifyMemberPortChecked(bool /*added*/, PortID /*memberPort*/) {}
void BcmTrunk::modifyMemberPort(bool /* added */, PortID /* memberPort */) {}

void BcmTrunk::programSubports(
    AggregatePort::SubportsConstRange /* oldMembersRange */,
    AggregatePort::SubportsConstRange /* newMembersRange */) {}
void BcmTrunk::programForwardingState(
    AggregatePort::SubportAndForwardingStateConstRange /* oldRange */,
    AggregatePort::SubportAndForwardingStateConstRange /* newRange */) {}
}
} // namespace facebook::fboss
