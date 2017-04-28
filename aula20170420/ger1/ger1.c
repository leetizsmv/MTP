#include <stdlib.h>
#include <windows.h>

int primo (int y)
{
   int cont,i,j;
   for (i=2;i<=y;i++)
   {
       cont=0;
       for (j=2;j<=i/2;j++)
       {
           if (i%j==0)
           {
               cont++;
           }
       }
   }
   if (cont==0)
    return 0;
   if (cont!=0)
    return 1;
}

int main()
{
    int x,y;
    printf("Digite o numero: ");
    scanf("%i",&x);
    y = primo(x);
    if (y==0)
        printf("\nEsse numero eh primo!\n");
    else
        printf("\nEsse numero naum eh primo!\n");
    system("pause");
    return 0;
}
