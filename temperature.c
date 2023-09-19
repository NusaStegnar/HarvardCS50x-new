#include <stdio.h>
#include <stdafx.h>

float t_max[28] = {3.4, 2.7, 2.2, 3.1, 3.0, 7.9, 3.6, 3.0, 4.4, 1.7, 1.3, 2.0, 1.9, 
                    2.7, 3.0, 1.8, 2.3, 0.1, 4.7, 8.4, 11.1, 10.0, 11.7, 3.9, 
                    2.6, 5.0, 1.9, 1.2};
float t_mid = 0;
int i;

int main()
{
    for (i = 0; i < 28; i++)
    {
        t_mid += t_max[i];
    }
    t_mid /= 28;
    printf("Days with highest temperatures,\n");
    printf("highest than monthly average (%.1f);\n", t_mid);
    for (i = 0; i < 28; i++)
    {
        if (t_max[i] > t_mid)
        {
            printf("%d. february: %.1f degrees\n", i + 1, t_max[i]);
        }
    }
    return 0;
}