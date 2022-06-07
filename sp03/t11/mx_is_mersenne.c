#include <stdio.h>

bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n) {
    if(mx_is_prime(n) == 0) { 
        return false;
    }
    for(int i = 1; i <= n / 2; i++) {
        if(mx_pow(2, i) == n + 1) {
            return true;
        }
    }
    return false;
}
