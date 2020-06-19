#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
        float V;
        unsigned long N, M;
        srand((unsigned long)time(NULL));
        M = rand() % 1000000;

        do{
              printf("Informe V e N: ");
              scanf("%f %lu ", &V, &N);

              if(!(V + N + M)) break;

              if(N%10000 == M%1000){
                     printf("%.2f\n", V * 3000);
              }else if(N%1000 == M%1000){
                     printf("%.2f\n", V * 500);
              }else if(N%100 == M%100){
                     printf("%.2f\n", V * 50);
              } else{
                 unsigned long GA = ((N % 100) - 1) / 4;
                 unsigned long  GS = ((M % 100) - 1) / 4;

                 if(GA == GS){
                     printf("%.2f\n", V * 16);
                 }else{
                     printf("0.00");
                 }
              }
        }while(1);
    return 0;
}
