#include <stdio.h>

int sum(int a){

       int soma;

       if(a==0){
            return 0;
       }else{
            soma = a + sum(a - 1);
       }

   return soma;
}

int main(){

   int n = 0;

   printf("Digite um Numero \n");
   scanf("%i",&n);
   printf("A soma de todos os numeros ate o que foi indicado e: %i", sum(n));
    return 0;
}
