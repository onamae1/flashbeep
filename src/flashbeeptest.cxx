#include "flashbeep.h"
#include "ncursesdelegater.h"
#include "ncursesinterface.h"
#include "ncurseslogger.h"

#include <CppUTest/CommandLineTestRunner.h>
#include <memory>
#include <ncurses.h>

using namespace fb;
using namespace std;

TEST_GROUP(flashbeepTestGroup) {};

TEST(flashbeepTestGroup, flashbeepTest) {
    auto logger = dynamic_pointer_cast<NCursesLogger>(
            NCursesInterface::instance);
    logger->clear();
    CHECK_EQUAL(OK, flashbeep());
    CHECK(logger.get());
    CHECK_EQUAL(2, logger->getCount());
    CHECK_EQUAL(string("flash"), logger->getLog(0));
    CHECK_EQUAL(string("beep"), logger->getLog(1));
}

int main(int argc, char **argv) {
    MemoryLeakWarningPlugin::turnOffNewDeleteOverloads();
    return RUN_ALL_TESTS(argc, argv);
}
