#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2) {
    int s11 = 0;
    int s22 = 0;
    int j = 0;
    int p = 0;
    for(int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if(s1[i] != s2[i]) {
            while (s1[j] != '\0') {
                j++;
                s11 = j;
            }
            while (s2[p] != '\0') {
                p++;
                s22 = p;
            }
            if(s11 > s22) {
                return 1;
            }
            else if(s22 > s11) {
                return -1;
            }
            return 1;
        }
        else if(s1[i] == '\0' || s2[i] == '\0') {
            while (s1[j] != '\0') {
                j++;
                s11 = j;
            }
            while (s2[p] != '\0') {
                p++;
                s22 = p;
            }
            if(s11 > s22) {
                return 1;
            }
            else if(s22 > s11) {
                return -1;
            }
            return 1;
        }
    }
    return 0;
}
