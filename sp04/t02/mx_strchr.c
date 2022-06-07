
char *mx_strchr(const char *s, int c) {
    char *te;
    te = (char *)s;
    for (int i = 0; *(te + y) != '\0'; y++) {
        if (*(te + y) == c) {
            return (te + y);
        }
    }
    return NULL;
}

