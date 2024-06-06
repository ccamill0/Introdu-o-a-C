#include <stdio.h>

int main(void)
{
  char nome[20];  //estabelece quantos caracteres serão armazenados na memória

  printf("Digite o seu nome: ");

  //scanf("%s",nome); função usada para nomes simples. Note que para vetor não há a necessidade do uso do '&'


  fgets(nome,20,stdin); //função que permite a entrada de nomes compostos

  printf("Seu nome é %s\n\n", nome);

  return 0;


}