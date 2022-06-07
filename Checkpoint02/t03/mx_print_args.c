#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1);
}

int mx_strlen(const char *s) {
    int count = 0;
    char p = s[0];
    while (p != '\0') {
        count++;
        p = s[count];
    }
    return count;
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

int main(int argc, char* argv[]) {
    int i = 1;
    while (i < argc) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
        i++;
    }
}


