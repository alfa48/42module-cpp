#include "microshell.h"
#include <stdlib.h>
#include <stdio.h>

void error(char *str)
{
    int i;

    i = -1;
    while (str[i++])
    {
        write(2, &str[i], 1);
    }
}

int main(void)
{
    error("manuel Andre\n");
    //printf("ola\n");
    return (0);
}