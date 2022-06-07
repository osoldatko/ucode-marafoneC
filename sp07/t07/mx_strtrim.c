#include <stdbool.h>
#include <stdlib.h>

void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
bool mx_isspace(char c);

static int space_b(const char *str, int size) {
    int c = 0;
    for (int i = 0; i < size; i++) {
        if (mx_isspace(str[i])) {
            c++;
        }
        else {
            break;
        }
    }
    return c;
}

static int space_a(const char *str, int size) {
    int c = 0;
    for (int i = size - 1; i > 0; i--) {
        if (mx_isspace(str[i])) {
            c++;
        }
        else {
            break;
        }
    }
    return c;
}

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    int size = mx_strlen(str);
    char *src = mx_strnew(size);
    src = mx_strncpy(src ,str, size);
    int count_spaces_before = space_b(str, size);
    int count_spaces_after = space_a(str, size);
    char *dst = mx_strnew(size - count_spaces_after - count_spaces_before);
    int j = 0;
    for (int i = count_spaces_before; i < size - count_spaces_after; i++) {
        dst[j++] = src[i];
    }
    mx_strdel(&src);
    return dst;
}


