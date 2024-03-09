#include <stdio.h>
//#include <stdafx.h>

char c;

int main()
{
    printf("Insert char and I will show you\n");
    printf("their ASCII codes. To end insert star (*):\n");
    do
    {
        scanf("%c", &c);
        fseek(stdin, 0, SEEK_END);
        printf("Char %c has code %i\n", c, c);
    } while (c != '*');
    return 0;
}