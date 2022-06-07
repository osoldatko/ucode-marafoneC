
int mx_atoi(const char *str) {
    int i = -1;
    int r = 0;

    while (str[++i]) {
        if (mx_isdigit(str[i]))
            r = r * 10 + str[i] - '0';
        if (!mx_isdigit(str[i]))
            return r;
    }
    return r;
}


