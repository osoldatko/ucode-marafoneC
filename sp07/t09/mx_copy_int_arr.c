#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    if (size < 0 || src == NULL) {
        return NULL;
    }
    int *s = (int *)malloc(size);
    for (int i = 0; i < size; i++) {
        s[i] = src[i];
    }
    return s;
}


