
int mx_popular_int(const int *arr, int size) {
    int maxx, c;
    for(int i = 0; i < size; i++) {
        c = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] == arr[i]) {
                c++;
                if (c > maxx) {
                    maxx = arr[j];
                }
            }
        }
    }
    return maxx;
}


