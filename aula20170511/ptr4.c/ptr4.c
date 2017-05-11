#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,soma;
    printf("Digite os numeros: ");
    scanf("%f%f",&x,&y);
    soma = x+y;
    printf("%p %0.1f\n",&x,x);
    printf("%p %0.1f\n",&y,y);
    printf("%p %0.1f\n",&soma,soma);
    return EXIT_SUCCESS;
}
