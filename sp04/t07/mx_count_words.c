#include <stdbool.h>

int mx_count_words(const char *str, char delimiter) {
    bool stat = true;
    unsigned words = 0;
    int i = 0;
    
    if (str == NULL) {
        return -1;
    }
    else {
        while (str[i]) {
            if (str[i] == delimiter) {
                stat = true;
            }
            else if (stat == true) {
                stat = false;
                words++;
            }
            i++;
        }
        return words;
    }
}


