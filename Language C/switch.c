//#include <stdafx.h>
#include <stdio.h>

int n;

int main()
{
    printf("The countdown just began. How much till start? ");
    scanf("%i", &n);
    switch(n)
    {
        case 10: printf("ten, ");
        case 9: printf("nine, ");
        case 8: printf("eight, ");
        case 7: printf("seven, ");
        case 6: printf("six, ");
        case 5: printf("five, ");
        case 4: printf("four, ");
        case 3: printf("three, ");
        case 2: printf("two, ");
        case 1: printf("one... let's go!\n");
    }
    return 0;
}