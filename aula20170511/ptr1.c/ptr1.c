#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i;
   unsigned int x = 0xFACA8421;
   void *V;
   unsigned char *p; //byte
   printf("Variavel %X \n",x);
   printf("Endereco: %p | Conteudo: %u\n",&x, x);
   //sizeof re7torna tamanho em bytes
   V= (void*) &x;
   p = (unsigned char *) &x; //static_cast
   for (i=0;i<sizeof(x);i++)
   printf("Em: %p | Conteudo: %u ou %X ou %c\n", p+i, p[i], p[i],p[i]);
   return EXIT_SUCCESS;
}
