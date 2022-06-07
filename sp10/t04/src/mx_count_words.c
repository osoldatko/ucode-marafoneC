#include "header.h"

int mx_count_words(const char *str, char delimiter) {
    int count = 0;
    int was = 0;
    for(int i = 0; str[i]; i++) {
        if (str[i] != delimiter) {
            if (!was) {
                ++count;
                was = 1;
            }
        }
        else {
            was = 0;
        }
    }
    return count;
}


