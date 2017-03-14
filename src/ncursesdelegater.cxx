#include "ncursesdelegater.h"

#include <ncurses.h>

namespace fb {
    int NCursesDelegater::beep(void) {
        return ::beep();
    }

    int NCursesDelegater::flash(void) {
        return ::flash();
    }

    shared_ptr<NCursesInterface> NCursesInterface::instance = 
        make_shared<NCursesDelegater>();
}
