#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length;
    do
    {
        int length = get_int("Length: ");
    }
    while (n < 1);

    int twice[length];

    twice[0] = 1;
    printf("%i\n", twice[0]);
    
    for (int i = 1; i < length; i++)
    {
        twice[i] = 2 * twice[i - 1];
        printf("%i\n", twice[i])
    }
}