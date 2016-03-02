#include <stdio.h>
#include <cs50.h>

//This computes the number of gallons of water used when given the duration of a shower.

int main(void)
{
    int minutes; //initial variable, user input
    int gallons; //output variable
    
    printf("minutes:");
    minutes = GetInt();
    gallons = minutes*12;
    printf("gallons:%d\n", gallons);
}