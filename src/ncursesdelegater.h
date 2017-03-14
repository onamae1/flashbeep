#ifndef NCURSESDELEGATER_H
#define NCURSESDELEGATER_H

#include "ncursesinterface.h"

namespace fb {
    class NCursesDelegater : public NCursesInterface {
    public:
        virtual int beep(void) override;
        virtual int flash(void) override;
    };
}

#endif
