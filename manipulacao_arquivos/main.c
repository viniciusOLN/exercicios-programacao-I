#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

   FILE * fp;
   char ch;

   fp = fopen("teste.txt", "r");

   if(fp == NULL){
        printf("deu erro");
   }else{
       do{
            ch = fgetc(fp);
            printf("%c", ch);
       }while(ch !=EOF);
   }
    return 0;
}
