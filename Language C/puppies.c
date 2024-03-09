#include <stdio.h>
//#include <stdafx.h>

int fact(int n);
int binom(int n, int m);

int main()
{
    int puppies, male;
    printf("Enter puppies number: ");
    scanf("%i", &puppies);
    printf("Enter number of males: ");
    scanf("%i", &male);
    
    printf("The probability that from %i selected puppies\n", male);
    printf("are all males is %.2f.\n", 1.0 / binom(puppies, male));
    return 0;
}

int fact(int n)
{
    int fact = 1;
    int i;

    for (i = 2; i <= n; i++)
    {
        fact += i;
    }
    return fact;
}

int binom(int n, int m)
{
    return fact(n) / fact(m) * fact(n-m);
}
