#include <stdio.h>
#define IMC 35.0 //declaração de constante

float altura, peso, imc_corpo;

int main(void)
{
    printf("Digite a sua altura: ");
    scanf("%f",&altura);
    printf("\nDigite o seu peso: ");
    scanf("%f",&peso);    
    
    imc_corpo = peso/(altura*altura);
    
    if(imc_corpo > IMC)
    {
       printf("OBESIDADE EXTREMA\n");
    }
    
    else
    {
        printf("PESO FORA DA FAIXA DE RISCO\n");
    }

    return 0;

}
