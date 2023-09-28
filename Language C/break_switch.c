#include <stdio.h>
//#include //<stdafx.h>

int n;

int main()
{
    printf("How many sandwiches do you want? ");
    scanf("%i", &n);
    printf("Please, quickly transport %i ", n);
    switch(n)
    {
        case 1: printf("sandwich.\n");
            break;
        case 2: printf("sandwiches.\n");
            break;
        case 3:
        case 4: printf("sandwiches.\n");
            break;
        default: printf("sandwiches.\n");
    }
    return 0;
}