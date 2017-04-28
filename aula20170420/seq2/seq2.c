#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,altura;
    float area;
    printf("Digite o valor da base e da altura: \n");
    scanf("%f%f",&base,&altura);
    area = base*altura;
    printf("area = %0.3f\n",area);
    return 0;
}
