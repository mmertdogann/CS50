#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // If a user enters a number less than 9 , re-prompt them
    int startSize;
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);
    
    // If a user enters a number less than the starting size, re-prompt them
    int endSize;
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);
    
    // n / 3 new llamas born
    // n / 4 llamas pass away
    int year = 0;
    while (startSize < endSize)
    {
        startSize = startSize + (startSize / 3) - (startSize / 4);
        year++;
    }

    printf("Years: %i\n", year);
}