#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int mx_strlen(const char *s) {
    int count = 0;
    for (char p = s[0]; p != '\0';) {
        count++;
        p = s[count];
    }
    return count;
}

void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}

int main(int argc, char *argv[]){
    if (argc != 2) {
        mx_printerr("usage: ./read_file [file_path]\n");
        return 0;
    }
    int fd = open(argv[1], O_RDONLY);
    if (fd < 0) {
        mx_printerr("error\n");
        return 0;
    }
    char c;
    while (read(fd, &c, 1) > 0) {
        write(1, &c, 1);
    }
    if (close(fd) < 0) {
        mx_printerr("error\n");
        return 0;
    }
    return 0;
}


