

void mx_swap_char(char *s1, char *s2) {
    char te = *s1;
    *s1 = *s2;
    *s2 = te;
}

void mx_str_reverse(char *s) {
    int pp = 0;
    while (s[pp] != '\0') {
        pp++;
    }
    int j = pp;
    for(int i = 0; i != j; i++) {
        mx_swap_char(&s[i], &s[j]);
        j++;
    }
}


