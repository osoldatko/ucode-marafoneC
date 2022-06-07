#include <unistd.h>

int mx_strlen(const char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

void mx_printchar(char c) {
    write(1,&c,1);
}

void mx_printint(int n) {
    int c = 0;
    while(n) {
        c = c * 10 + n % 10;
        n /= 10;
    }
    n = c;
    for (int i = n; i != 0; i = i / 10) {
        mx_printchar((i % 10) + 48);
    }
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

int main(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
    mx_printchar('\n');
    return 0;
}


