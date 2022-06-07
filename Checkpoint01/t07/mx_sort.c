#include <stdbool.h>
#include <stdlib.h>

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    int i = 0;
    int j = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (f(arr[j], arr[j + 1])) {
                int te = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = te;
            }
        }
    }
}


