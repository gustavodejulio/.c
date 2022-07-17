#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float dolars = get_float("Dólars: ");
    /*float pennies = dolars * 100;
    printf("Pennies: %.0f \n", pennies);*/
    int pennies = round(dolars*100);
    printf("Pennies: %i \n", pennies);
}
