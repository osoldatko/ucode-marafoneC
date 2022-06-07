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

int mx_strlen(const char *s) {
    int count = 0;
    for (char p = s[0]; p != '\0';) {
        count++;
        p = s[count];
    }
    return count;
}

char *mx_strcpy(char *dst, const char* src) {
    int p = 0;
    for (p = 0; src[p] != '\0'; p++) {
        dst[p] = src[p];
    }
    dst[p] = '\0';
    return dst;
}

char *mx_strdup(const char *str) {
    return (mx_strcpy(mx_strnew(mx_strlen(str)), str)); 
}


