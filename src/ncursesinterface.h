#ifndef NCURSESINTERFACE_H
#define NCURSESINTERFACE_H

#include <memory>

using namespace std;

namespace fb {
    struct NCursesInterface {
        virtual int beep(void) = 0;
        virtual int flash(void) = 0;

        static shared_ptr<NCursesInterface> instance;
    };
}

#endif
