#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
int mx_tolower(int c){
    if('a' <= c && c <= 'z'){
        c += 'Z' - 'z';
        return c;
    }
    return c;
}
