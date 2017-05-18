#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SOMA(pa,pb,pr) \
       ({ pr.x = pa.x + pb.x; \
          pr.y = pa.y + pb.y; \
        })
#define DISTANCIA(pa,pb) \
        (sqrt(pow(pa.x-pb.x,2) + pow(pa.y-pb.y,2)))
#define IMPRIMIR(pa) \
       ({ printf("(%0.1f,%0.1f)", pa.x,pa.y); \
       })
struct Ponto {
    float x;
    float y;
};


int main()
{
    struct Ponto pontoA,pontoB, pontoC;
    printf("Digite coordenadas X e Y de A: ");
    scanf("%f %f", &(pontoA.x), &(pontoA.y));
    printf("Digite coordenadas X e Y de B: ");
    scanf("%f %f", &(pontoB.x), &(pontoB.y));
    SOMA(pontoA,pontoB,pontoC);
    printf("\nA soma de A e B = ");
    IMPRIMIR(pontoC);
    printf("\nA distancia entre eles = %0.1f \n", DISTANCIA(pontoA,pontoB));
    return 0;
}
