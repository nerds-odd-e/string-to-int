set(Test_SRCS AllTests.cpp testStringToInt.cpp)

include_directories($ENV{CPPUTEST_HOME_INCLUDE})
include_directories(${PROJECT_SOURCE_DIR}/include)

add_library(cpputest STATIC IMPORTED)
set_property(TARGET cpputest PROPERTY
        IMPORTED_LOCATION $ENV{CPPUTEST_HOME_LIB}/libCppUTest.a)

add_executable(string-to-int-test ${Test_SRCS})
target_link_libraries(string-to-int-test cpputest core)


