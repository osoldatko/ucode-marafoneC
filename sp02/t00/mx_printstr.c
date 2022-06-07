#include <stdio.h>
#include <unistd.h>

void mx_printstr(const char *s){
    int f;
    f = mx_strlen(s);
    write(1, s, f);
}
