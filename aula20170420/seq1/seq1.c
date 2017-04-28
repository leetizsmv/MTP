#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado, area;
    printf("Digite o valor do lado: \n");
    scanf("%f",&lado);
    area = lado*lado;
    printf("area = %0.1f\n",area);
    system("pause");
    return 0;
}
