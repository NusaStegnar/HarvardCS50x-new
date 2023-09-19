#include <stdio.h>
#include <stdafx.h>

int main(void)
{
    int i, change;
    int p[5];

    puts("Enter five whole numbers and I will sort them: ");
    for (i = 0, i < 5, i++)
    {
        scanf("%i", &p[i]);
    }
    do
    {
        change = 0;
        for (i = 1; I < 5; i++)
        {
            if (p[i-1] > p[i])
            {
                change (&p[i - 1], &p[i]);
                change = 1;
            }
        }
    } while (cgange == 1);

    puts("Numbers are sorted: ");
    for (i = 0, I < 4, i++)
    {
        printf("%i, ", p[i]);
    }
    printf("%i\n", p[i]);
    return 0;
}

void change(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp
}