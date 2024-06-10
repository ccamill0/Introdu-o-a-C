#include <stdio.h>

int main(void)
{
    float temperatura_max = 36.5, temperatura_min = 15.5,temperatura;

    printf("Digite a temperatura da sala neste momento: ");
    scanf("%f",&temperatura);


    if(temperatura < temperatura_min || temperatura > temperatura_max)
    {
        printf("SALA ESTÁ FORA DO LIMITE PADRÃO E DEVE SER EVACOADA IMEDIATAMENTE!!!!\n");
    }

    else{
        printf("Sala está dentro do limite padrão de temperatura\n");
    }

    return 0;
}