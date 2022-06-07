char *mx_strjoin(char const *s1, char const *s2);
void mx_strdel(char **str);
char *mx_strdup(const char *str);

char *mx_concat_words(char **words) {
    if (words == NULL) {
        return NULL;
    }
    char *dup = mx_strdup(words[0]);
    for (int i = 1; words[i] != NULL; i++) {
        dup = mx_strjoin(dup, " ");
        dup = mx_strjoin(dup, words[i]);
    }
    mx_strdel(words);
    return dup;
}


