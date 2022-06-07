#include <stdlib.h>
#include <stdbool.h>

char *mx_del_extra_whitespaces(const char *str);
char *mx_strtrim(const char *str);
bool mx_isspace(char c);
int mx_strlen(const char *s);

char *mx_del_extra_whitespaces(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    char *ci  = mx_strtrim(str);
    for (int i = 1; i <  mx_strlen(ci) - 1; ++i) {
        if (mx_isspace(ci[i]) && mx_isspace(ci[i + 1])) {
            while (mx_isspace(ci[i + 1])) {
                char temp = ci[i + 1];
                int j; 
                for (j = i; j <  mx_strlen(ci) - 1; ++j) {
                    char tmp = ci[j];
                    ci[j] = ci[j + 1];
                    ci[j + 1] = tmp;
                }
                ci[j] = temp;
                ci = mx_strtrim(ci);
            }
        }       
        else {
            if (mx_isspace(ci[i]) && ci[i] != ' ') {
                ci[i] = ' ';
            }
        }
    }
    char *res = mx_strtrim(ci);
    free(ci);
    return res;
}


