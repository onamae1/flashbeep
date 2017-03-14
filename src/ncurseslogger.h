#ifndef NCURSESLOGGER_H
#define NCURSESLOGGER_H

#include "ncursesinterface.h"

#include <string>
#include <vector>

using namespace std;

namespace fb {
    class NCursesLogger : public NCursesInterface {
    public:
        virtual int beep(void) override;
        void clear(void);
        virtual int flash(void) override;
        size_t getCount();
        string getLog(const int &index);
    protected:
        vector<string> logs;
    };
}

#endif
