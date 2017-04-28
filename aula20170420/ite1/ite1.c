#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fat=1,i;
    printf("Digite o numero: \n");
    scanf("%i",&n);
    for (i=n;i>1;i--)
        fat = fat*i;
    printf("\nO fatorial desse numero eh: %i \n",fat);
    system("pause");
    return 0;
}
