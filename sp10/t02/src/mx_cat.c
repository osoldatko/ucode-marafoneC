#include "header.h"

int main(int argc, char *argv[]) {
    char cha;
    int rw;
    int i = 0;
    if (argc == 1) {
        while (read(0, &cha, 1))
            write(1, &cha, 1);
    }
    for(i = 1; i < argc; i++) {
        rw = open(argv[i], O_RDONLY);
        if (rw < 0) {
            write(2, "mx_cat: ", 8);
            write(2, argv[i], mx_strlen(argv[i]));
            write(2, ": No such file or directory\n", 28);
        }
        else {
            while (read(rw, &cha, 1)) {
                write(1, &cha, 1);
            }
        }
        close(rw);
    }
    exit(0);
}


