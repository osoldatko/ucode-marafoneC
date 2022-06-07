#include <unistd.h>

void mx_printstr(const char *s) {
    int p = 0;
    for (char i = s[0]; i != '\0'; i = s[p]) {
        p++;
    }
    write(1, s, p);
}


