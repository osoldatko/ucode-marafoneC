#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool mx_isupper(int c){
    if('A' <= c && c <= 'Z'){
        return 1;
    }
    return 0;
}
