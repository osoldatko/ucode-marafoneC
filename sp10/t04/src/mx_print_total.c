#include "header.h"

void mx_print_tota(int *tota) {
    mx_printchar('\t');
    mx_printint(tota[0]);
    mx_printchar('\t');
    mx_printint(tota[1]);
    mx_printchar('\t');
    mx_printint(tota[2]);
    mx_printchar('\t');
    mx_printstr("total");
    mx_printchar('\n');
}


