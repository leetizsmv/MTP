#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, cont=0;
    int vetor[]={0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    unsigned char *p;
    p = (unsigned char *) &vetor;
    for (i=0;i<sizeof(vetor);i++)
    {
        if ((p[i]==0xFF) && (p[i]==11111111))
        cont++;
        printf("Em: %p | Contem: %i \n", p+i, p[i]);
    }
    return EXIT_SUCCESS;
}
