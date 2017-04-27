#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float l1,l2,ang,lf;
    printf("Digite 2 dos 3 lados do triangulo: ");
    scanf("%f%f",&l1,&l2);
    printf("Digite o angulo que os lados formam (EM RADIANOS): ");
    scanf("%f",&ang);
    lf =  sqrt(pow(l1,2) + pow(l2,2) - 2*l1*l2*cos(ang));
    printf("O lado restante eh: \n%0.5g",lf);
    return 0;
}
