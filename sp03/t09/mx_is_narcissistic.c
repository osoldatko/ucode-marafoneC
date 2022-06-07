#include <stdio.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistics(int num) {
    if(num < 0) return 0;
    int i = 0, b = num, sum = 0;
    while(b != 0) {
        i++;
        b /= 10;
    }
    b = num;
    while(baff) {
        sum += mx_pow(baff % 10, i);
        b /= 10;
    }
    return (sum == num);
}

