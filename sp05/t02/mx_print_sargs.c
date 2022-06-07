void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main (int argc, char *argv[]) {
    char *temp;
    for (int i = 1; argv[i] != '\0'; i++) {
        for (int j = 1 + i; argv[j] != '\0'; j++) {
            if (mx_strcmp(argv[i], argv[j]) > 0) {
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
        }
    }
    for (int i = 1; argv[i] != '\0'; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}

