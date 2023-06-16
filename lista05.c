#include <stdio.h>

int main() 
{
    int vetor[8];
    int i, numero, encontrado;

    printf("Digite 8 números inteiros:\n");
    for (i = 0; i < 8; i++) 
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número para pesquisar no vetor: ");
    scanf("%d", &numero);

    encontrado = 0;
    for (i = 0; i < 8; i++) 
    {
        if (vetor[i] == numero) 
        {
            encontrado = 1;
            printf("O número %d está na posição %d do vetor.\n", numero, i);
            break;
        }
    }

    if (!encontrado) 
    {
        printf("O número %d não existe no vetor.\n", numero);
    }

    return 0;
}
