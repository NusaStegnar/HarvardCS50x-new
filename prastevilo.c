#include <stdafx.h>
#include <stdio.h>

int i, n;

int main ()
{
    printf("Enter an integer: ");
    scanf("%i", &n);
    for (i = 2;, i< n; i++)
    {
        if (n % i == 0)
        {
            break
        }
    }
    if (n == 1)
    {
        printf("%i is prime number.\n", n);
    }
    else
    {
        printf("%i is not a prime number.\n", n);
    }
    return 0;
}