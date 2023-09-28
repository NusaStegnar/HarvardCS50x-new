#include "./lib/cs50lib/cs50.h"
#include <stdio.h>

int main(void)
{
    int x;

    do
    {
        x = get_integer("Enter an integer: ");
    }
    while (x > 0 && x <= 8);

    for (int i = 0; i <= 8; i++)
    printf("#\n");
}