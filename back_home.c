#include <stdio.h>
#include <stdafx.h>

int main()
{
    char msg[10] = "Back at home";
    printf("%s %s\n", msg, &msg[5]);
    return 0;
}