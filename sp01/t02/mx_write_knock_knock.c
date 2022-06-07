#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void mx_write_knock_knock(void)
{
        char ff[100] = "Follow the white rabbit.\n Knock, knock, Neo.\n";
        write(1,&ff,strlen(ff));
}
