#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int c_c (char palavra[])
{
    int cont=0,i;
    for (i=0;palavra[i]!='\0';i++)
    {
        if ((palavra[i]==' ') && (palavra[i+1]=='\0'))

            cont--;
        else
            cont++;
    }
    if (palavra[0]==' ')
        cont--;
    return cont;
}

int main()
{
    int cont;
    char palavra[256];
    printf("Digite a mensagem: ");
    scanf("%s",palavra);
    cont = c_c(palavra);
    printf("%i \n",cont);
    system("pause");
    return 0;
}
