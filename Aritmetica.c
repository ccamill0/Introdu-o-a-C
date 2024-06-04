#include <stdio.h>


int main()
{   
    /* Declaração de variáveis*/
    int numero1, numero2;
    int soma, produto, diferença, quociente, modulo;
    
    /* Programa pede ao usuário entrar com os dois números inteiros*/
    printf("Digite dois números:\n");
    scanf("%d%d",&numero1,&numero2);
    
    /* Reliza as principais operações aritméticas */
    soma = numero1 + numero2;
    diferença = numero1 - numero2;
    produto = numero1 * numero2;
    quociente = numero1 / numero2;
    modulo = numero1 % numero2;
    
    
    /* Imprime os resultados das operações aritméticas*/
    printf("A soma é %d\n",soma);
    printf("A diferença é %d\n", diferença);
    printf("O produto é %d\n", produto);
    printf("O quociente é %d\n", quociente);
    printf("O módulo é %d\n", modulo);
    

    return 0;

}
