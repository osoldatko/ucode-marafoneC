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

int mx_strlen(const char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

char *mx_strcpy(char *dst, const char *src) {
    int i;
    for (i = 0; *(src + i) != '\0'; i++) {
        *(dst + i) = *(src + i);
    }
    dst[i] = '\0';
    return dst;
}

char *mx_strdup(const char *str) {
    char *s = mx_strnew(mx_strlen(str));
    mx_strcpy(s, str);
    return s;
}


