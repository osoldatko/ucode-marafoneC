#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1);
}

void mx_printint(int n) {
    char c[55];
    long n1 = n;
    int i = 0;
    if (n == 0) { 
        mx_printchar(0 + '0');
    }
    if (n1 < 0) {
        n1 = n1 * -1;
        mx_printchar('-');
    }
    while (n1 != 0) {
        c[i++] = (n1 % 10) + '0';
        n1 = n1 / 10;
    }
    int j = i - 1;
    while (j >= 0) {
        mx_printchar(c[j]);
        j--;
    }
}


