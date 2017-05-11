#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,cont=0;
    int vetor[] = {0,1,2,4,8};
    void *v;
    char *p;
    v = (void*) &vetor;
    p = (unsigned char *) v;
    for (i=0;i<sizeof(vetor);i++)
    {
        if (p[i]==0x00)
        cont++;
        printf("Em: %p | Contem: %X \n", *(p+i), p[i]);
    }
    return EXIT_SUCCESS;
}
