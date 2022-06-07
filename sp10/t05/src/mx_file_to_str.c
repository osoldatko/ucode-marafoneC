#include "minilibmx.h"

char *mx_file_to_str(const char *filename) {
    char *dstr = NULL;
    int fdd;
    int coun = 0;
    char cha;
    int i = 0;
    fdd = open(filename, O_RDONLY);
    while (read(fdd, &cha, 1)) {
        coun++;
    }
    close(fdd);
    fdd = open(filename, O_RDONLY);
    dstr = mx_strnew(coun);
    for (i = 0; read(fdd, &cha, 1); i++) {
        dstr[i] = cha;
    }
    close(fdd);
    return dstr;
}


