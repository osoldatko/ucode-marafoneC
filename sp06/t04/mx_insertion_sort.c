int mx_strlen(const char *c);

int mx_insertion_sort(char **arr, int size) {
    int i = 0;
    int p = 0;
    int u = 0; 
    char *temp;

    for (i = 1; i < size; i++) { 
        temp = arr[i];
        p = i - 1;
        while (p >= 0 && mx_strlen(arr[p]) > mx_strlen(temp)) { 
            arr[p + 1] = arr[p]; 
            p = p - 1; 
            u++;
        } 
        arr[p + 1] = temp; 
    }
    return u;
}


