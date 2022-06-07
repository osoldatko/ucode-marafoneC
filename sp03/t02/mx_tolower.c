#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
int mx_tolower(int c){
    if('A' <= c && c <= 'Z'){
        c += 'z' - 'Z';
        return c;
    }
    return c;
}
