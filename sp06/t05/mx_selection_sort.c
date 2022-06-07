int mx_strlen(const char *c);
int mx_strcmp (const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size) {
    int i = 0;
    int j = 0;
    int p;
    int num = 0;
    char *temp;
    for(i = 0; i < (size - 1); i++) {
        p = i;
        for(j = i + 1; j < size; j++) {
            if(mx_strcmp(arr[p], arr[j]) > 0) {
                p = j;
            }
        }
        if(p != i) {
            temp = arr[i];
            arr[i] = arr[p];
            arr[p] = temp;
            ++num;
        }
    }
    
    return num;
}


