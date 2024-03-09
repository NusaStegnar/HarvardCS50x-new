#include "./lib/cs50lib/cs50.h"
#include <stdio.h>

int main(void)
{
    //Print  grid of bricks
    const int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}