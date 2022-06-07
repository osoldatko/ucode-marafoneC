#include <stdlib.h>

char *mx_strnew(const int size) {
    char *str = (char*) malloc((size + 1) * sizeof(char));
    if (str == NULL || size < 0) {
        return NULL;
    }
    int p = 0;
    while (p < size) {
        str[p] = '\0';
        p++;
    }
    str[size] = '\0';
    return str;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    unsigned long tmp = 0;
    unsigned long quot = nbr;
    int length = 0;
    for (length = 0; quot != 0; length++) {
        quot = quot/16;
    }
    quot = nbr;
    char *hexdecnum = mx_strnew(length);
    int i = 0;
    int j = 0; 
    while (quot != 0) {
        tmp = quot % 16;
        if(tmp < 10) {
            tmp = tmp + 48;
        }
        else {
            tmp = tmp + 87; 
        }
        j++;
        quot = quot / 16;
        hexdecnum[i++] = tmp;
    }
    j--;
    i = 0;
    while (i < j) {
        char temp = hexdecnum[i];
        hexdecnum[i] = hexdecnum[j];
        hexdecnum[j] = temp;
        i++;
        j--;
    }
    return hexdecnum;   
}


