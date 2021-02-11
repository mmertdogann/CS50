#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // Get user input
    long number;
    do 
    {
        number = get_long("Number: ");
    }
    while (number < 0);
    
    
    int lastSum = 0;
    int checkSum = 0;
    int length = 1;
    long tempNumber = number;
    
    // Determine checkSum
    while (tempNumber > 0)
    {
        int lastTwo = (2 * ((tempNumber % 100) / 10));
        int lastOne = (tempNumber % 10);
        
        if (lastTwo / 10 > 0)
        {
            lastSum += lastTwo / 10;
            lastSum += lastTwo % 10;
        } 
        else 
        {
            lastSum += lastTwo;
        }
        
        if (lastOne / 10 > 0)
        {
            checkSum += lastOne / 10;
            checkSum += lastOne % 10;
        } 
        else 
        {
            checkSum += lastOne;
        }
        
        tempNumber /= 100;
    }
    
    checkSum += lastSum;
    
    int firstTwo = 0;
    tempNumber = number;
    
    // Determşne first two digits
    while (tempNumber / 10 > 0)
    {
        firstTwo = tempNumber;
        tempNumber /= 10;
        length++;
    }
    
    // Determine if the given credit card number invalid or not
    if (checkSum % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    
    if ((length > 12 && length < 17) && firstTwo / 10 == 4) 
    {
        printf("VISA\n");
    } 
    else if (length == 16 && (firstTwo == 51 || firstTwo == 52 || firstTwo == 53 || firstTwo == 54 || firstTwo == 55)) 
    {
        printf("MASTERCARD\n");
    } 
    else if (length == 15 && (firstTwo == 34 || firstTwo == 37)) 
    {
        printf("AMEX\n");
    } 
    else 
    {
        printf("INVALID\n");
    }
}