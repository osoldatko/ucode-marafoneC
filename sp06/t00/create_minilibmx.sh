#!/bin/ssh

touch minilibmx.a
echo "void mx_printchar(char c);" >> minilibmx.a
echo "void mx_printint(int n);" >> minilibmx.a
echo "void mx_printstr(const char *s);" >> minilibmx.a
echo "char *mx_strcpy(char *dst, const char *src);" >> minilibmx.a
echo "int mx_strlen(const char *s);" >> minilibmx.a
echo "int mx_strcmp(const char *s1, const char *s2);" >> minilibmx.a
echo "bool mx_isdigit(char c);" >> minilibmx.a
echo "bool mx_isspace(char c);" >> minilibmx.a
echo "int mx_atoi(const char *str);" >> minilibmx.a


