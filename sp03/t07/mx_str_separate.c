#include <stdio.h>

void mx_printchar(char c);
void mx_str_separate(const char *str, char delim) {
    int ll = 0;
    for(int i = 0; *(str + i) != '0'; i++) {
        if(*(str + i) != delim) {
            ll = 0;
            mx_printchar(*(str + i));
        } 
        else if(ll != 1) {
            mx_printchar('\n');
            ll = 1;
        }
    }
}

