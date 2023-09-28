#include <stdio.h>
//#include //<stdafx.h>

void menjaj(int *a, int *b);

int main()
{
    int i, menjava;
    int p[5];
    
    puts("Vpisi 5 celih stevil, jaz jih bom uredil po velikosti:"); 
    for (i = 0; i < 5; i++) 
    { 
        scanf("%d", &p[i]); 
    } 
    do 
    { 
        menjava = 0; 
        for (i = 1; i < 5; i++) 
        { 
            if (p[i-1] > p[i]) 
            { 
                menjaj(&p[i-1], &p[i]); 
                menjava = 1; 
            } 
        } 
    } while (menjava == 1); 

    puts("Stevila, urejena po velikosti:"); 
    for (i = 0; i < 4; i++) 
    { 
        printf("%d, ", p[i]); 
    } 
    printf("%d\n", p[i]); 
    return 0; 
}

void menjaj(int *a, int *b) 
{ 
 int tmp = *a; 
 *a = *b; 
 *b = tmp; 
}
void change(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}