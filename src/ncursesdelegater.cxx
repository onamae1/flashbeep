#include "ncursesdelegater.h"

#include <ncurses.h>

namespace fb {
    int NCursesDelegater::beep(void) {
        return ::beep();
    }

    int NCursesDelegater::flash(void) {
        return ::flash();
    }

    const shared_ptr<NCursesInterface> NCursesInterface::instance = 
        make_shared<NCursesDelegater>();
}
