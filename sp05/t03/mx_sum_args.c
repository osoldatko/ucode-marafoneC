int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    int sum = 0, i;
    for (i = 1; i < argc; ++i) {
        sum = sum + mx_atoi(argv[i]);
    }
    mx_printint(sum);
    mx_printchar('\n');
    return 0;
}

