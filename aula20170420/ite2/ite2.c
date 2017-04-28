#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,p,r=0,i=1;
    printf("Digite a base e em seguida, a potencia: \n");
    scanf("%i%i",&b,&p);
    if (p==0)
        printf("\nO resultado eh 1!");
    else
    {
      do
      {
          if (r==0)
          {
              r=b*b;
              i++;
          }
          else
          {
              r=r*b;
              i++;
          }
      }
    while (i<p);
    printf("\nB^P = %i \n",r);
    }
    system("pause");
    return 0;
}
