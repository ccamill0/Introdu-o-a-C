#include <stdio.h>

int bubble_sort(int vetor[20]){        /* Bubble Sort Algoritmo*/
    int aux,i;
    int flag = 1;  //Sinalizador para indicar se a lista está ordenada
    while(flag){
         flag = 0;
         for(i=0;i<=18;i++){
            if(vetor[i]>vetor[i+1]){
              flag = 1;
              aux = vetor[i];
              vetor[i] = vetor[i+1];
              vetor[i+1] = aux;

            }
             
    	}
    }
    
  }
  
int main(){


    int vetor[20]  = {23,12,34,5,0,7,4,-2,1,10,11,31,55,44,121,9,8,53,93,30};
    bubble_sort(vetor);
    int i;
    for(i=0;i<=19;i++){

        printf( "%d", vetor[i] );
        printf( "\n" );
    }    
        
    return 0;
}

