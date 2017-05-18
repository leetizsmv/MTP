#include <stdio.h>
#include <stdlib.h>
#define NCHAR 256

int main()
{
    int op,i;
    long long int *p,num;
    char str[NCHAR], *pc;
    printf("Digite 1 para criptografar e 2 para descriptografar: ");
    scanf("%i",&op); getchar();
    if (op==1)
     {
        for (i=0;i<NCHAR;i++)
            str[i]='\0';
        printf("Digite o texto : ");
        fgets(str,NCHAR,stdin);
        p = (long long int *) str;
        for (i=0;i<sizeof(str)/sizeof(long long int);i++)
            printf("%lld", p[i]);
        return EXIT_SUCCESS;
     }
     if (op==2)
    {
        printf("\nEntre com os codigos '0' p/ encerrar: \n");
        pc = (char *) &num;
       do
       {
         scanf("%llf",&num);
         for (i=0;i<sizeof(num);i++)
            printf("%c",pc+i);
       printf("\n");
       } while (num!=0);
       return EXIT_SUCCESS;
    }
    printf("\nEscolhe direito fera!!!\n");
    return EXIT_FAILURE;
}
