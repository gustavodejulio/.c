#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Essas são as linhas
    for (int i = 0; i < n; i++)
    {
        // Essas são as colunas
        for(int j = 0; j < n; j++)
        {
            // Imprime os tijolos
            printf("#");
        }
        // Move to the next row
        printf("\n");
    }
}