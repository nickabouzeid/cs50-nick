#include <stdio.h>
#include <cs50.h>

//This makes a pyramid, like the ones Mario jumps over.

int main(void)
{
    int height;
    printf("Height:"); //initial attempt to get number
    height = GetInt();
    while(height<0 || height>23) //redoes query if height isn't a good number
    {
        if(height<0) //used if statements in case down the line you want to split up responses, commented out below
        {
            printf("Height: ");
            //printf("\nYour number was negative. :/ Retry:")
            height = GetInt();
        }
        else
        {
            printf("Height: ");
            //printf("\nYour number was too big. :/ Retry:")
            height = GetInt();
        }
    }
   for(int i = 2; i <= height+1; i++)  // loops for each line
   {
    for(int a = height - i+1; a > 0; a--)
    {
        printf(" ");
    }
    for(int b = i; b > 0; b--)
    {
        printf("#");
    }
    printf("\n");
   }
}