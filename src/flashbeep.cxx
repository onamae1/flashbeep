#include "flashbeep.hxx"

#include <ncurses.h>

using namespace fb;

namespace fb {
    int __stdcall flashbeep(void) {
        if ((int ret = flash()) != OK) {
            return ERR;
        }
        if ((int ret = beep()) != OK) {
            return ERR;
        }
        return OK;
    }
}
