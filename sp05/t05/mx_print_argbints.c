void mx_printchar(char c);
int mx_atoi (const char *str);
void mx_printint(int n);

void bin(int nn) {
    for (int i = 31; i >= 0; i--) {
        int kk = nn >> i;
        if (kk & 1)
            mx_printchar('1');
        else
            mx_printchar('0');
    }
}

int main(int argc, char* argv[]){
    for(int i = 1; i < argc; ++i){
        bin(mx_atoi(argv[i]));
        mx_printchar('\n');
    }
    return 0;
}

