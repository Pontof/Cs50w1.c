#include <cs50.h>
#include <stdio.h>

int calculate_coins(int cents, int value);
int main(void)
{

    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    int quarter = calculate_coins(cents, 25);
    cents = cents - (quarter * 25);

    int dimes = calculate_coins(cents, 10);
    cents = cents - (dimes * 10);

    int nickels = calculate_coins(cents, 5);
    cents = cents - (nickels * 5);

    int pennies = calculate_coins(cents, 1);

    printf("%i\n", quarter + dimes + nickels + pennies);
}

int calculate_coins(int cents, int value)
{
    int count = 0;
    while (cents >= value)
    {
        count++;
        cents = cents - value;
    }
    return count;
}
