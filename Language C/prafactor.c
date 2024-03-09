//#include <stdafx.h>
#include <stdio.h>

unsigned int prafactor(unsigned int n);

int main()
{
    unsigned int number, f;
    printf("Enter a number you would like\n");
    printf("to slice to prafactors: ");
    scanf("%u", &number);
    printf("\nPrafactors:\n%i", prafactor(number));
    while (f = prafactor(0))
    {
        printf(", %i", f);
    }
    printf("\n");
    return 0;
}

unsigned int prafactor(unsigned int n)
{
    static unsigned int komad;
    unsigned int i;
    if (n > 0)
    {
        komad = n;
    }
    else if (komad ==1)
    {
        return 0;
    }
    for (i = 2; i <= komad; i++)
    {
        if (komad % i == 0)
        {
            komad /= i;
            return i;
        }
    }
    return i;
}