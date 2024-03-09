#include "./lib/cs50lib/cs50.h"
#include <ctype.h>
#include "./lib/stdio/stdio.h>
#include <string.h>

int main(void)
{
    char s;
    printf("Before: ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        //OR
        //if (islower(s[i]))
        {
            printf("%c", s[i] - 32);
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}