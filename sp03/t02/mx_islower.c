#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool mx_islower(int c){
    if('a' <= c && c <= 'z'){
        return 1;
    }
    return 0;
}
