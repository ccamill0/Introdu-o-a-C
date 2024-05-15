/*
Criar um vetor denominado A com 10 posições do tipo int, preencher o vetor recebendo dados via teclado e multiplicar o conteúdo de cada elemento do vetor A por 10 armazenando o resultado desta multiplicação em outro vetor denominado B.


*/

#include <stdio.h>

int main(void){

    float A[10], B[10];
    int i;
    
    // Dados de Entrada
    for(i=0;i<=9;i++)
    {
       printf("Digite o valor da posição %d: ",i);
       scanf("%f",&A[i]);
       B[i] = A[i] * 10 ;
    }
    // Dados de Saída
    for(i=0;i<=9;i++)
    {
       printf("B[%d] = %.2f\n",i,B[i]);
    }
	return 0;

}
