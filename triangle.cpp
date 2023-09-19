#include <stdio.h>
#include <cs50.h>

bool valid_triangle(float a, float b, float c);

bool main(void)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }

    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        return false
    }

    return true
}