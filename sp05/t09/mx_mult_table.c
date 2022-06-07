#include <stdbool.h>

bool mx_isdigit(int c);
int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);
int mx_strlen(const char *s);

int main(int argc, char* argv[]) {
    int x = 0, y = 0;
    if(argc == 3 && mx_strlen(argv[1]) == 1 && mx_strlen(argv[2]) == 1 && mx_isdigit(argv[1][0]) && mx_isdigit(argv[2][0])) {
        if(mx_atoi(&argv[1][0]) > mx_atoi(&argv[2][0])) {
            y = mx_atoi(&argv[2][0]);
            x = mx_atoi(&argv[1][0]);
        }
        else {
            y = mx_atoi(&argv[1][0]);
            x = mx_atoi(&argv[2][0]);
        }
        for (int i = y; i <= x; i++) {
            for (int j = y; j <= x; j++) {
                mx_printint(j * i);
                if (j != x) {
                    mx_printchar('\t');
                }
            }
            mx_printchar('\n');
        }
    }
    return 0;
}

