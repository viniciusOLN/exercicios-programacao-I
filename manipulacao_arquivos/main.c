#include <stdio.h>
#include <stdlib.h>

int main(){
   FILE * fp;

   fp = fopen("teste.txt", "r");

   if(fp == NULL){
        printf("deu erro");
   }else{
        printf("deu certo");
   }
    return 0;
}
