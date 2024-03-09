#include <stdio.h>
//#include <stdafx.h>

int i;

int fact(int n);

int main()
{
    for (i = 1; i <=8; i++)
    {
        printf("%i! = %i\n", i, fact(i));
    }
    return 0;
}

int fact(int n)
{
    int fact = 1;
    for (i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}