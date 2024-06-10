/*
Estrutura de decisão múltiplas

*Comandos switch-case:
    * É como se fosse vários if em sequência
    * Útil para comaprar uma única variável
          * Somente comparações de igualdade
    * Caso seja igual a 1 dos valores:
          *  Executa o respectivo bloco
          * Ignora todos os outros blocos
    
    Sintaxe:
             switch(<var>){
                    case <v1>:
                             <bloco_de_comandos1>
                             break;
                    case <v2>:
                             <bloco_de_comandos2>
                             break;                             
                    ...
                    case <vN>:
                             <bloco_de_comandosN>
                             break;
                    default:
                           <bloco_de_comandos_padrão>
                           break;                                
             }
*/

#include <stdio.h>

int main(void)
{
    int nota;

    printf("Digite a nota que você deu ao filme: ");
    scanf("%d",&nota);

    switch(nota)
    {
        case 1:
             printf("\n*\n");
             printf("\nFilme Péssimo!\n");
             break;
        case 2:
             printf("\n**\n");
             printf("\nFilme Regular!\n");
             break;
        case 3:
             printf("\n***\n");
             printf("\nFilme Bom!\n");
             break;
        case 4:
             printf("\n****\n");
             printf("\nFilme Ótimo!\n");
             break;
        case 5:
             printf("\n*****\n");
             printf("\nFilme Excelente!\n");
             break;
        default:
             printf("\n:(\n");
             printf("\nPor favor, entre com valores de 1 à 5!\n");
             break; 
    }

    return 0;
}