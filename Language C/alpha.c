#include "./lib/cs50lib/cs50.h"
#include <stdlib.h>>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string word = getchar("Word: ");

    int word_length = strlen(word);
    for (int i = 0; i < word_length -1; i++)
    {
        if (word[i] > word[i + 1])
        {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}