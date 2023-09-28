#include <stdio.h>
//#include <stdafx.h>

char string[256];
char c;
int i, counter = 0;

int main()
{
    printf("Enter text: ");
    gets(string);
    printf("Enter char: ");
    scanf("%c", &c);
    for (i=0; string[i] != 0; i++)
    {
        if(string[i] == c)
        {
            counter ++;
        }
    }
    printf("In text the char %c appears %i-times\n", c, counter);
    return 0;
}