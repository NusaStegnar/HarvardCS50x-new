#include <stdio.h>
#include "./lib/cs50lib/cs50.h"

int main(void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");
    
    if (i == j)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}