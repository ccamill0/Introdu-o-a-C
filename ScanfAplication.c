#include <stdio.h>

int main(void)
{
    int numero;
    float nota;
    char conceito;

    printf("Digite o conceito do aluno: ");
    scanf("%c",&conceito);

    printf("Digite a nota do aluno: ");
    scanf("%f",&nota);

    printf("Digite o número de matrícula do aluno: ");
    scanf("%d",&numero);

    printf("\nO conceito do aluno é %c\n",conceito);
    printf("A nota do aluno é %.2f\n",nota);
    printf("O número de matrícula do aluno é %d\n\n",numero);


    return 0;


}