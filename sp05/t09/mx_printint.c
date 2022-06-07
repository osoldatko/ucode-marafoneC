void mx_printchar(char c);
void mx_printint(int n);

void mx_printint(int n) {
    int c = 0;
    while(n) {
        c = c * 10 + n % 10;
        n /= 10;
    }
    n = c;
    for (int i = n; i != 0; i = i / 10) {
        mx_printchar((i % 10) + 48);
    }
}

