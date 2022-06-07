int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    int num = 0;
    char *temp;
    for (int i = 0; i < size; i++) {
        for (int j = 1 + i; j < size; j++) {
            if (mx_strcmp(arr[i], arr[j]) > 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                num++;
            }
        }
    }
    return num;
}


