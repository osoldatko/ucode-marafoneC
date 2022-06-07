#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "mx_printchar.c"

void mx_print_alphabet(void)
{
     int j = 98;
     for(int i= 65; i <= 89; i = i+2)
     {
         mx_printchar(i);
         write(1,"\n",1);
         mx_printchar(j);
         write(1,"\n",1);
         j = j+2;
     }
}

