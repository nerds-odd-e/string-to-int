#include "stringToInt.h"
#include <stdlib.h>

int status = OK;

int string_to_int(char* str) {
    int result = atoi(str);
    if (result == 0) {
        status = NOK;
    }
    return result;
}

int get_error_status() {
    return status;
}

void reset_status() {
    status = OK;
}