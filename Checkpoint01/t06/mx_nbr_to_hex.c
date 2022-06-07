#include <stdlib.h>

char *mx_strnew(const int size) {
    char *mem;
    int i = 0;
    if (size < 0) {
        return 0;
    }
    mem = (char *)malloc(size + 1);
    while (i < size) {
        mem[i] = '\0';
        i++;
    }
    mem[i] = '\0';
    return mem;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    int size = 0;
    unsigned long temp = 0;
    unsigned long qu = nbr;
    while (qu != 0) {
        qu = qu/16;
        ++size;
    }
    unsigned long qqs = nbr;
    char *num = mx_strnew(size);
    int i = 0;
    int j = 0;
    while (qqs != 0) {
        temp = qqs % 16;
        if (temp < 10) {
            temp = temp + 48;
        }
        else {
            temp = temp + 87;
        }
        ++j;
        qqs = qqs/16;
        num[i++] = temp;
    }
    j = j - 1;
    for (i = 0; i < j; i++) {
        char temp11 = num[i];
        num[i] = num[j];
        num[j] = temp11;
        j--;
    }
    return num;
}


