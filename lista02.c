#include <stdio.h>

int main() 
{
    int vetor[10];
    int i;
    int maior, menor, diferenca;

    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    for (i = 1; i < 10; i++) 
    {
        if (vetor[i] > maior) 
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor) 
        {
            menor = vetor[i];
        }
    }

    diferenca = maior - menor;

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    printf("A diferença entre o maior e o menor número é: %d\n", diferenca);

    return 0;
}