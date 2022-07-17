#include <stdio.h>

void meow (void);

int main(void)
{
    // First option
    int counter = 0;
    while (counter < 3)
    {
        meow();
        counter++;
    }

    // Second option
    for (int i = 0; i < 3; i++)
    {
        printf("meow2 \n");
    }
}

void meow(void)
{
    printf("meow \n");
}