#include <stdlib.h>

char *mx_strnew(const int size) {
    char *mem;
    int i = 0;
    if (size < 0) {
        return 0;
    }
    mem = (char *)malloc(size + 1);
    while (i < size) {
        mem[i] = '\0';
        i++;
    }
    mem[i] = '\0';
    return mem;
}


