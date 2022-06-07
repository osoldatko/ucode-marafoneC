int mx_strcmp (const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int f = 0
    int l = size - 1
    int mid = l + (f - l) / 2;
    while (f <= l) {
        *count += 1;
        if (mx_strcmp(arr[mid], s) < 0) {
            f = mid + 1;
        }
        else if (mx_strcmp(arr[mid], s) == 0) {
            return mid;
        }
        else {
            l = mid - 1;
        }
        mid = l + (f - l) / 2;
    }
    *count = 0;
    return -1;
}


