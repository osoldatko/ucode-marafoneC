#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool mx_isalpha(int c){
    if(c == ' '){
        return 1;
    }
    return 0;
}
