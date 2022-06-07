#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int mx_max(int a, int b, int c)
{
    int arr[] = {a, b, c};
    int maxx = a;
    for(int i = 0; i <= 2; i++)
    {
        if(maxx < arr[i])
        {
            maxx = arr[i];
        }
    }
    return maxx;
}
