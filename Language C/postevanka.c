//#include <stdafx.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int right = 0, all = 0;
unsigned int mnoz1, mnoz2, score;
unsigned int answer;
unsigned int percent;

const int criterion = 5;

int main()
{
    srand((unsigned)time(NULL));
    printf("Welcome to multiplication!\n");
    printf("You should get five answer right,\n");
    printf("then you can go watch tv.\n\n");
    do
    {
        mnoz1 = rand() % 10 + 1;
        mnoz2 = rand() % 10 + 1;
        printf("%u * %u = ", mnoz1, mnoz2);
        score = mnoz1 * mnoz2;
        scanf("%u", &answer);
        if(answer == score)
        {
            right = right + 1;
        }
        else
        {
            printf("Wrong. Right is %u\n", score);
        }
        all = all + 1;
    } while (right < criterion);
    percent = 100 * right / all;
    printf("You score %u%%.\n Go now.\n", percent);
    return 0;
}
