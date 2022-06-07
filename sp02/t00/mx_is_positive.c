#include <stdio.h>
#include <unistd.h>

void mx_is_positive(int i){
    if (i == 0){
        char z[100] = "zero";
        mx_printstr(z);
        write(1, "\n", 1);
    }
    if (i < 0){
        char f[100] = "negative";
        mx_printstr(f);
        write(1, "\n", 1);
    }
    if (i > 0){
        char p[100] = "positive";
        mx_printstr(p);
        write(1, "\n", 1);
    }
}
