/*Programa cujo o intuito é verificar se o aluno foi aprovado, levando em consideração a nota e a presença */
#include <stdio.h>

int main(void){

    float media_final, frequencia;

    printf("Digite a média final do aluno: ");
    scanf("%f", &media_final);

    printf("Digite a frequeência (em decimal) do aluno: ");
    scanf("%f",&frequencia);

    if (media_final >= 7 && frequencia >= 0.75) //Para o operador && (E) o resultado será verdadeiro caso todas as comparações sejam verdadeiras.
    {
        printf("Aluno APROVADO\n");
    }
    else
    { 
        printf("Aluno REPROVADO\n");
    }
    
    
    
    return 0;

}