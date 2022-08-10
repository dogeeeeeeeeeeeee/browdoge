/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "CaptureCommandList.h"
#include "DrawCommand.h"

namespace mozilla {
namespace gfx {

CaptureCommandList::~CaptureCommandList() { Clear(); }

void CaptureCommandList::Clear() {
  for (iterator iter(*this); !iter.Done(); iter.Next()) {
    DrawingCommand* cmd = iter.Get();
    cmd->~DrawingCommand();
  }
  mLastCommand = nullptr;
  mStorage.clear();
}

}  // namespace gfx
}  // namespace mozilla