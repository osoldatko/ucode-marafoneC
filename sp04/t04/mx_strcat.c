
char *mx_strcat(char *s1, const char *s2) {
    int s01 = mx_strlen(s1);
    int s02 = mx_strlen(s2);
    for (int i = 0; i < s02; i++) {
        s1[s01 + i] = s2[i];
    }
    return s1;
}


