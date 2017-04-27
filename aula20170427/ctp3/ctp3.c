#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NCHAR 256

int main()
{
    int i,cont=0;
    char frase[NCHAR];
    printf("Digite a frase: ");
    fgets(frase,NCHAR,stdin);
    for (i=0;frase[i]!='\0';i++)
        if (isalpha(frase[i]))
          cont++;
    printf("O numero de letras da frase eh: \n%d",cont);
    return 0;
}
