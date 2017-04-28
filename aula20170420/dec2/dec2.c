#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int n,a,soma;
    printf("Digite um numero positivo: \n");
    scanf("%i",&n);
    printf("O numero informado eh: %i",n);
    a = rand()%10;
    soma = n + a;
    printf("\nA soma eh: %i",soma);
    if (soma%2==0)
        printf("\nA soma eh par \n");
    else
        printf("\nA soma eh impar\n");
    system("pause");
    return 0;
}
