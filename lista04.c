#include <stdio.h>

int isPrime(int number) 
{
    int i;

    for (i = 2; i <= number / 2; i++) 
    {
        if (number % i == 0) 
        {
            return 0;
        }
    }

    return 1;
}

int main() 
{
    int vetor[10];
    int i;

    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Números primos encontrados:\n");
    for (i = 0; i < 10; i++) 
    {
        if (isPrime(vetor[i])) 
        {
            printf("%d\n", vetor[i]);
        }
    }

    return 0;
}
