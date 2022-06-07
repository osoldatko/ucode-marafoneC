#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int mx_sum_digits(int num){
    if(num < 0){
        num = num * -1;
    }
    int numm = num;
    int z = numm / 1000;
    numm = numm - (z * 1000);
    int o = numm / 100;
    numm = numm - (o * 100);
    int t = numm / 10;
    numm = numm - (t * 10);
    int s = numm;
    int sum = z + o + t + s;
    return sum;
}
