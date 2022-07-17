#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    if(quarters != 0)
    {
        printf("Total of quarters: %i\n", quarters);
    }
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    if(dimes != 0)
    {
        printf("Total of dimes: %i\n", dimes);
    }
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    if(nickels != 0)
    {
        printf("Total of nikels: %i\n", nickels);
    }
    cents = cents - nickels * 10;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    if(pennies != 0)
    {
        printf("Total of pennies: %i\n", pennies);
    }


    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("Total of coins: %i\n", coins);
}


int get_cents(void)
{
    // TODO
    int cents;
    do
    {
        cents = get_int("How many cents owed: ");
    }
    while (cents < 0);
    return cents;
}

int calculate_quarters(int cents)
{
    // TODO
    int quarters = cents / 25;
    return quarters;
}

int calculate_dimes(int cents)
{
    // TODO
    int dimes = 0;
    if(cents % 25 != 0)
    {
        dimes = (cents % 25) / 10;
    }
    return dimes;
}

int calculate_nickels(int cents)
{
    // TODO
    int nikels = 0;
    if(cents % 10 != 0 || cents % 25 != 0)
    {
        nikels = (cents % 10) / 5;
    }
    return nikels;
}

int calculate_pennies(int cents)
{
    // TODO
    int pennies = 0;
    if(cents % 5 != 0)
    {
        pennies = (cents % 5) / 1;
    }
    return pennies;
}
