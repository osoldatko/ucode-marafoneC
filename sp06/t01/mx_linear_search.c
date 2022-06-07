int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s) {
    int num;
    int p = 0;
    while (s[p] != '\0') {
        p++;
    }
    for (int i = 0; i < p; i++) {
        if(mx_strcmp(s, arr[i]) == 0) {
            return i;
        }
    }
    return -1;
}


