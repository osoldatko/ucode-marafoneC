#include <stdio.h>

double mx_pow(double n, unsigned int pow) {
    double ll = n;
    if(pov == 0.0) {
        return 1;
    }
    for(unsigned int i = 1; i < pov; i++) {
        ll *= n;
    }
    return ll;
}

