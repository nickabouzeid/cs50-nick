#include <stdio.h>
#include <cs50.h>
#include <math.h>

//This calculates the number of coins needed to make change for a dollar amount.

int main(void)
{
    float input = 0.00; //declaring variable
    while(input<0.005)
    {
    printf("O hai! How much change is owed?\n");
    input = GetFloat();
    }
    
    //calculating number of coins once float value is checked
    int amt = roundf(input*100); //cast float to int
    
    //decided to use individual counters in case the cashier wants a count down the line
    int quarter = 0;
    int dime = 0;
    int nickel = 0;
    int penny = 0;
    
    while(amt>=25)
    {
        amt = amt - 25;
        quarter++;
    }
    while(amt>=10)
    {
        amt = amt - 10;
        dime++;
    }
    while(amt>=5)
    {
        amt = amt - 5;
        nickel++;
    }
    while(amt>=1)
    {
        amt = amt - 1;
        penny++;
    }
    int total = quarter + dime + nickel + penny;
    printf("%d\n",total);
}