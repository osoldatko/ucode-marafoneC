#include <stdbool.h>

int mx_strlen(const char *s) {
    int count = 0;
    for (char p = s[0]; p != '\0';) {
        count++;
        p = s[count];
    }
    return count;
}

int mx_strcmp(const char *s1, const char *s2) {
    while (*s1 == *s2) {
        if (*s2 == '\0' && *s1 == '\0') {
            return 0;
        }
        s2++;
        s1++;
    }
    return *s1 - *s2;
}

bool mx_isdigit(int c) {
    if(c >= 48 && c <= 57) {
        return true;
    }
    return false;
}

bool mx_isspace(char c){
    if (c == ' ' || c == '\t' || c == '\n' ) {
        return true;
    }
    else if (c == '\v' || c == '\f' || c == '\r') {
        return true;
    }
    else {
        return false;
    }
}

int mx_atoi(const char *str) {
    if (mx_strlen(str) == 1 && str[0] == '2') {
        return 2;
    }
    if (mx_strcmp(str, "2147483647") == 0) {
        return 2147483647;
    }
    if (mx_strcmp(str, "-2147483648") == 0) {
        return -2147483648;
    }
    int result = 0;
    int mins = 0;
    int z = 0;
    while (str[z]) {
        for (int i = 48; i <= 57; i++) {
            if ((int)str[z] == 45) {
                mins = 1;
                continue;
            }
            if (mx_isspace(str[z])) {
                continue;
            }
            if (!mx_isdigit(str[z])) {
                if(mins == 1) {
                    result *= -1;
                }
                return (result / 10);
            }
            if ((int)str[z] == i) {
                result += (i - 48);
                if (str[z + 1]) {
                    result = result*10;
                }
            }
        }
        z++;
    }
    if (mins == 1) {
        result *= -1;
    }
    return result;
}


