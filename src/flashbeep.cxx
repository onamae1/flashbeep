#include "flashbeep.hxx"

#include <ncurses.h>

using namespace fb;

namespace fb {
    int __stdcall flashbeep(void) {
        if (flash() != OK) {
            return ERR;
        }
        if (beep() != OK) {
            return ERR;
        }
        return OK;
    }
}
