#include <stdio.h>
#include "./lib/cs50lib/cs50.h"
#include <string.h>
 
int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");
    
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}