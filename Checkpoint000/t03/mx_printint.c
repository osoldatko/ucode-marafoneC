#include <unistd.h>

void mx_printint(int n) {
    int num = 0;
    int c = 0;
    while(n) {
        c = c * 10 + n % 10;
        n /= 10;
    }
    n = c;
    for(int i = n; i != 0; i = i / 10) {
        num = (i % 10) + 48);
        write(1, &num, 1);
    }
}


