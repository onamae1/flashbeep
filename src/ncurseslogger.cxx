#include "ncurseslogger.h"

#include <ncurses.h>

namespace fb {
    int NCursesLogger::beep(void) {
        this->logs.push_back("beep");
        return OK;
    }

    int NCursesLogger::flash(void) {
        this->logs.push_back("flash");
        return OK;
    }

    size_t NCursesLogger::getCount(void) {
        return this->logs.size();
    }

    string NCursesLogger::getLog(const int &index) {
        return this->logs.at(index);
    }

    const shared_ptr<NCursesInterface> NCursesInterface::instance = 
        make_shared<NCursesLogger>();
}
