#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Prompting the user for a starting # of llamas
    int start;
    do
    {
        start = get_int("Start size: ");
    {
        while (start < 9);
   
    //Prompting them for an ending # of llamas
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    //How many years will take to get to a goal?
    int years = 0;
    while (start < end)
    {
        start += start / 12;
        years ++
    }
    printf("years: %i\n", years);
}
