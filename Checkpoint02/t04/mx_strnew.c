#include <stdlib.h>

char *mx_strnew(const int size) {
    char *str = (char*) malloc((size + 1) * sizeof(char));
    if (str == NULL || size < 0) {
        return NULL;
    }
    int p = 0;
    while (p < size) {
        str[p] = '\0';
        p++;
    }
    str[size] = '\0';
    return str;
}


