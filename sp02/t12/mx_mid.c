#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int mx_mid(int a, int b, int c){
    int arr[] = {a, b, c};
    int maxx = a;
    int minn = a;
    int midd = 0;
    for (int i = 0; i <= 2; i++){
        if(maxx < arr[i]){
            maxx = arr[i];
        }
    }
    for (int j = 0; j <= 2; j++){
        if(minn > arr[j]){
            minn = arr[j];
        }
    }
    for (int p = 0; p <= 2; p++){
        if (minn != arr[p] && maxx != arr[p]){
            midd = arr[p];
        }
    }
    if (a == b || a == c){
        midd = a;
    }
    else if (b == a || b == c){
        midd = b;
    }
    return midd;
}
