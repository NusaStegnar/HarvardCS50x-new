//#include <stdafx.h>
#include <stdio.h>

unsigned long fax = 1;
int i, n;

int main()
{
    printf("Write a number and I will give you the facultation: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        fax *= i;
    }
    printf("%d! = %lu\n", n, fax);
    return 0;
}