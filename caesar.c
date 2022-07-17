#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Confere se tem mais de 1 input
    if (argc == 2)
    {
        // Loop para transformar string em char
        for(int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            //Função para saber se o char é um número
            if (!isdigit(argv[1][i]))
            {
                printf("ERRO! Não é um número. 'Usage: ./caesar key'\n");
                return 1;
            }
        }

        //Converte a string para int
        int key = atoi(argv[1]);
        if(key < 1)
        {
            printf("ERRO! Não é um número positivo válido. 'Usage: ./caesar key'\n");
        }
        else
        {
            //Recebe a entrada de text a ser criptografada
            string plaintext = get_string("Plaintext: ");
            //Printar a legenda
            printf("Ciphertext: ");
            //Loop para transformar a string em char e assim mudar as letras de acordo com o numero passado, cada letra tem um código e se diferencia entre maiúscula e minúscula
            for(int k = 0, m = strlen(plaintext); k < m; k++)
            {
                if(islower(plaintext[k]))
                {
                    printf("%c", (plaintext[k] - 'a' + key) % 26 + 'a');
                }
                else if(isupper(plaintext[k]))
                {
                    printf("%c", (plaintext[k] - 'A' + key) % 26 + 'A');
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("ERRO! Quantidade de argumentos inválidos. 'Usage: ./caesar key'\n");
    }
}