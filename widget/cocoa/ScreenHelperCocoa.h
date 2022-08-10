/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_widget_cocoa_ScreenHelperCocoa_h
#define mozilla_widget_cocoa_ScreenHelperCocoa_h

#include "mozilla/widget/ScreenManager.h"

@class ScreenHelperDelegate;
@class NSScreen;

namespace mozilla {
namespace widget {

class ScreenHelperCocoa final : public ScreenManager::Helper {
 public:
  ScreenHelperCocoa();
  ~ScreenHelperCocoa() override;

  void RefreshScreens();

  static NSScreen* CocoaScreenForScreen(nsIScreen* aScreen);

 private:
  ScreenHelperDelegate* mDelegate;
};

}  // namespace widget
}  // namespace mozilla

#endif  // mozilla_widget_gtk_ScreenHelperGtk_h