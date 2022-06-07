char *mx_strchr(const char *s, int c) {
    char *te;
    te = (char *)s;
    for (int i = 0; *(te + i) != '\0'; i++) {
        if (*(te + i) == c) {
            return (te + i);
        }
    }
    return 0;
}

