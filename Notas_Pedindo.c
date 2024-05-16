#include <stdio.h>

int main(void){
   
   float notas[4];
   int i;
   
   //entrada de dados
   for(i=0;i<=3;i++)
   {
      printf("Digite a nota do aluno: ");
      scanf("%f",&notas[i]);
      
   }

   //saída de dados
   for(i=0;i<=3;i++)
   {
      printf("A nota %d = %.1f\n",i,notas[i]);
      
   }

   return 0;
}
