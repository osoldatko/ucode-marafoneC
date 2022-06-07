#include "file_to_str.h"

char *mx_strcat(char *s1, const char *s2) {
    int s01 = mx_strlen(s1);
    int s02 = mx_strlen(s2);
    int i = s01;
    int j = 0;
    while (i < (s01 + s02)) {
        s1[i] = s2[j];
        j++;
        i++;
    }
    s1[i++] = '\0';
    return s1;
}


