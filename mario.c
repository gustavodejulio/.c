#include <cs50.h>
#include <stdio.h>



int main(void)
{
    // Definindo a variável altura para a condição do while
    int altura;
    do
    {
        // Recebendo o valor altura
        altura = get_int("Altura: ");
    }
    // Condição para que a pergunta se repita até que um valor entre 1 e 8 seja inserido
    while (altura < 1 || altura > 8);

    // Criando o laço de linha
    for (int linha = 0; linha < altura; linha++)
    {
        // Criando o laço para imprimir o espaço
        // O valor do espaço é a altura - linha (começa com 0) - 1 (Se a quantidade de blocos for 8 o espaço vai ser 7); vai ser impresso um espaço enquanto o espaço for maior do que 0; diminui 1 unidade
        for (int espaco = altura - linha - 1; espaco > 0; espaco--)
        {
            printf(" ");
        }
        // Quando o espaço for 0, segue para o próximo laço em que o bloco é menor que a linha (começa com 0) + 1, na primeira impressão bloco 0 < linha +1, depois bloco 1 = linha + 1, fecha o laço
        for (int bloco = 0; bloco < linha + 1; bloco++)
        {
            printf("#");
        }
        // Quebra a linha
        printf("\n");
    }

}