#include "flashbeep.h"
#include "ncursesinterface.h"

#include <ncurses.h>

using namespace fb;

int __stdcall flashbeep(void) {
    int result = OK;
    if (OK != NCursesInterface::instance->flash()) {
        result = ERR;
    } else if (OK != NCursesInterface::instance->beep()) {
        result = ERR;
    }
    return result;
}
