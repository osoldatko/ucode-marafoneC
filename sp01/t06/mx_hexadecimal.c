#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "mx_printchar.c"

void mx_hexadecimal(void)
{
for (int i = 48; i <= 57;i++)
        {
                mx_printchar(i);
                write(1,"\n",1);
        }
for (int i = 65; i <= 70;i++)
        {
                mx_printchar(i);
                write(1,"\n",1);
        }
}

