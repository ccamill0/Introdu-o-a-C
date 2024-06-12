#include <stdio.h>

int main(void)
{
    float vteste;
    printf("--- TIPO ---|--- BYTES --- \n");
    printf(" char ......: %ld bytes\n", sizeof(char));
    printf(" short .....: %ld bytes\n", sizeof(short));    
    printf(" int .......: %ld bytes\n", sizeof(int));
    printf(" long ......: %ld bytes\n", sizeof(long));
    printf(" float .....: %ld bytes\n", sizeof(float));
    printf(" double ....: %ld bytes\n", sizeof(double));    
    printf(" long double: %ld bytes\n", sizeof(long double));    
    printf("\nO tamanho de vteste é...: %ld \n\n", sizeof vteste);    
    return 0;
}

/* O operador sizeof permite retornar a quantidade de memória alocada (em bytes) por um tipo de dados, ou por uma determinada variável.
	O valor retornado pode variar com a arquitetura da máquina que está sendo utilizada.
	O sizeof pode ser usado de duas maneiras:
	   sizeof nome_da_variável
	   sizeof (nome_do_tipo) */
