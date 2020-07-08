#include <stdio.h>

int main(){

   int vet[10];

   for(int i = 1; i < 10; i++){
       printf("Digite o %i numero: ",i);
        scanf("%i", &vet[i]);
   }

    return 0;
}
