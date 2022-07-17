#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string ccnumber = get_string("Credit Card Number: ");
    if(ccnumber[1] == 1)
    {
        printf("VISA");
    }
}
