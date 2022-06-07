#include "../inc/calculator.h"

bool mx_isdigit (char c);
bool mx_isspace (char c);

int mx_atoi (const char *str) {
    int i = 0;
    int star = -1;
    int e = -1;
    long int ret = 0, re;
    bool min = false;
    switch (str[i]) {
        case '-':
            min = true;
        case '+':
            ++i;
        default:
            star = i;
            break;
    }
    while (str[i]) {
        if (!mx_isdigit(str[i]))
            return 0;
        ++i;
    }

    for (i = star; str[i]; ++i) {
        if (mx_isdigit(str[i]))
            e = i;
        else
            break;
    }

    for (i = e; i >= star; --i) {
            re = 1;
        for (int j = 0; j < e - i ; ++j)
            re *= 10;
        ret += (str[i] - 48) * re;
    }
    if (min)
        ret = -ret;
    return (int)ret;
}

