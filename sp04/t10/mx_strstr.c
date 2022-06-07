
char *mx_strstr(const char *s1, const char *s2) {
    char *temps1 = (char *)s1;
    char *temps2 = (char *)s2;
    
    if ((!s1) || (!s2)) {
        return NULL;
    }
    if (!mx_strlen(s2)) {
        return temps1;
    }
    while (*temps1) {
        if (!mx_strncmp(temps1, temps2, mx_strlen(temps2))) {
            return temps1;
        }
        temps1++;
    }
    return NULL;
}


