#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    // Prompt user for the height and re-prompt if the number is out of range
    int height;
    do 
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    
    // create right aligned pyramid with spaces
    for (int i = 0; i < height; i++) 
    {
        for (int j = 0; j < height - i - 1; j++) 
        {
            printf(" ");
        }
        
        
        for (int k = height; k >= height - i; k--)
        {
            printf("#"); 
        }
        
        printf("  ");
        
        for (int l = 0; l <= i; l++) 
        {
            printf("#");
        }
        
        
        printf("\n");
    }
}