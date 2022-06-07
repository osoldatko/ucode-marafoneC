#include <stdio.h>

void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s) {
    int j = mx_strlen(s);
    for(int i = 0; i != j; i++) {
        mx_swap_char(&s[i], &s[j]);
        j++;
    }
}

