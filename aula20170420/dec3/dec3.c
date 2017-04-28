#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int a,b,c,s;
    a = rand()%7;
    b = rand()%7;
    c = rand()%7;
    printf("O primeiro dado deu: %d",a);
    printf("\nO segundo dado deu: %d",b);
    printf("\nO terceiro dado deu: %d",c);
    s = a+b+c;
    printf("\nA soma dos 3 dados deu: %i",s);
    if ((s==7) || (s==11))
     printf("\nVc venceu!!!!");
    else
     printf("\nVc perdeu!!!");
    system("pause");
    return 0;
}
