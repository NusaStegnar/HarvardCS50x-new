#include <stdio.h>
#incclude <stdafx.h>

struct student
{
    char name[20];
    int height;
} st1, st2;

int main()
{
    printf("Enter name and height of the first student: ");
    scanf("%s%i", st1.name, &st1.height);
    printf("Enter name and height of the second student: ");
    scanf("%s%i", st2.name, &st2.height);
    if (st1.height > st2.height) printf("%s is heigher.\n", st1.name);
    else if (st1.height < st2.height) printf("%s is heigher.\n", st2.name);
    else printf("Both are the same height.");
    return 0;
}