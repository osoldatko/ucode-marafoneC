#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
int mx_toupper(int c){
    if('a' <= c && c <= 'z'){
        c += 'Z' - 'z';
        return c;
    }
    return c;
}
