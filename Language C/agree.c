#include "./lib/cs50lib/cs50.h"
#include <stdio.h>

int main(void)
{
    char b = puts("Do you agree? ");
    char c = getchar();

    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}

 