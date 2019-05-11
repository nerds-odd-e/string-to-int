#include "CppUTest/TestHarness.h"

extern "C"
{
#include "stringToInt.h"
}

TEST_GROUP(StringToInt){

    void setup() {
        reset_status();
    }

    void teardown() {

    }
};

TEST(StringToInt, oneChar) {
    CHECK_EQUAL(1, string_to_int("1"))
    CHECK_EQUAL(OK, get_error_status())
}

TEST(StringToInt, moreThanOneChars) {
    CHECK_EQUAL(1234, string_to_int("1234"))
    CHECK_EQUAL(OK, get_error_status())
}

TEST(StringToInt, notANumber) {
    CHECK_EQUAL(0, string_to_int("a"))
    CHECK_EQUAL(NOK, get_error_status())
}

