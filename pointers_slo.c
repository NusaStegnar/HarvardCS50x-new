#include <stdio.h>
#include <stdafx.h>

int main()
{
    float f, *k;
    f = 500;
    k = &f;
    printf("%.1f %.1f\n", f, *k);
    return 0;
}