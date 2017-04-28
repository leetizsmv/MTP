#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,C,D,E,media;
    do
    {
    printf("Digite as notas do aluno: \n");
    scanf("%f%f%f%f%f",&A,&B,&C,&D,&E);
    media = ((A*2)+(B*2)+(C*2)+(D*3)+(E*5))/14;
    printf("\nA media do aluno eh: %0.3f\n",media);
    }
    while ((A>=0 && A<=10) && (B>=0 && B<=10) && (C>=0 && C<=10) && (D>=0 && D<=10) && (E>=0 && E<=10));
    system("pause");
    return 0;
}
