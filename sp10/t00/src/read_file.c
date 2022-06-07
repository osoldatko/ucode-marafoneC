#include "../inc/header.h"

static int file_op(char *arr[], int bb) {
    bb = open(arr[1], O_RDONLY);
    if (bb < 0) {
        write(2, "error\n", 6);
        return -1;
    }
    return bb;
}

int main(int argc, char *argv[]) {
    int fds = 0;
    ssize_t ref;
    char cha;
    if (argc != 2) {
        write(2, "usage: ./read_file [file_path]\n", 31);
        return -1;
    }
    fds = file_op(argv, fds);
    while ((ref = read(fds, &cha, 1)) > 0) {
        write(1, &cha, 1);
        if (ref < 0) {
            write(2, "error\n", 6);
            return -1;
        }
    }
    close(fds);
    return 0;
}


