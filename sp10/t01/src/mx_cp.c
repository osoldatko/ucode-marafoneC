#include "header.h"

static int check_error_arg(int argc_c, char *argv_v[]) {
    if (argc_c != 3) {
        mx_printerr("usage: ");
        mx_printerr(argv_v[0]);
        mx_printerr(" [source_file] [destination_file]\n");
        return -1;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int fd_ou;
    int fd_in;
    char buffe;
    if (check_error_arg(argc, argv) < 0)
        return -1;
    fd_ou = open(argv[1], O_RDONLY);
    if (fd_ou < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file or directory\n");
        return -1;
    }
    fd_in = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
    while (read(fd_ou, &buffe, 1)) {
        write(fd_in, &buffe, 1);
    }
    close(fd_ou);
    close(fd_in);
    exit(0);
}


