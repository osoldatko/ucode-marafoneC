#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool mx_is_odd(int value){
    int i = value % 2;
    if(i == 0){
        return false;
    }
    if(i == 1){
        return true;
    }
    return 0;
}
