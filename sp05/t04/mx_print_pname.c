char *mx_strchr(const char *s, int c);
void mx_printstr(const char *s);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    char* temp = argv[0];
    while(mx_strchr(temp, '/')) {
        temp++;
    }
    mx_printstr(temp);
    mx_printchar('\n');
    return 0;
}

