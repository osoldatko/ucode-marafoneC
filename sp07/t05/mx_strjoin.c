#include <stdlib.h>

char *mx_strcat(char *s1, const char *s2);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strjoin(char const *s1, char const *s2) {
    if (s1 == NULL && s2 == NULL) {
        return NULL;
    }
    else if (s1 == NULL) {
        return mx_strdup(s2);
    }
    else if (s2 == NULL) {
        return mx_strdup(s1);
    }
    else {
        int s11 = mx_strlen(s1);
        int s22 = mx_strlen(s2);
        char *s3 = mx_strnew(s11 + s22);
        s3 = mx_strcpy(s3, s1);
        s3 = mx_strcat(s3, s2);
        return s3;
    }
}


