#include "../inc/calculator.h"

int mx_strcmp(const char *s1, const char *s2) {
    int p = 0;
    while (s1[p] != '\0' || s2[p] != '\0') {
        if (s1[p] != s2[p]) {
            return s1[p] - s2[p];
        }
        ++p;
    }
    return 0;
}


