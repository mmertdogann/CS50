#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //prompt user for input, re-prompt for negative inputs
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change <= 0);
    
    //convert the input from floats to integers and round to the nearest penny
    int cents = round(change * 100);
    int counter = 0;
    
    int quarters = 25;
    while (cents >= quarters) 
    {
        cents -= quarters;
        counter++;
    }
    
    int dimes = 10;
    while (cents >= dimes) 
    {
        cents -= dimes;
        counter++;
    }
    
    int nickels = 5;
    while (cents >= nickels) 
    {
        cents -= nickels;
        counter++;
    }
    
    int pennies = 1;
    while (cents >= pennies) 
    {
        cents -= pennies;
        counter++;
    }
    
    printf("%i\n", counter);
}