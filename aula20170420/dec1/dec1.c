#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Digite o numero: \n");
    scanf("%i",&x);
    if ((x%2)== 0)
        printf("par, ");
    else
        printf("impar,  ");
    if ((x%3)== 0)
        printf("mult. 3, ");
    if ((x%5)== 0)
        printf("mult. 5, ");
    if ((x%7)== 0)
        printf("mult. 7, ");
    printf("\n");
    system("pause");
    return 0;
}
