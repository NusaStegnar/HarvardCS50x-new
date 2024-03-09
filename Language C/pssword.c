#include <stdio.h>
#include <string.h>
//#include <stdafx.h>

char password[20];
int i;

int main()
{
    printf("Type in a new password: ");
    gets(password);
    i = strlen(password);
    if (i < 8)
    {
        puts("Password is too short");
    }
    return 0;
}