#include <stdio.h>

int main(void)
{
    float numero;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    
    //condição ? comando para condição verdadeira : comando para condição falhar
    numero>=0 ? numero++ : numero--;
    
    printf("O novo valor de numero é: %.2f\n", numero);
    return 0;


}
