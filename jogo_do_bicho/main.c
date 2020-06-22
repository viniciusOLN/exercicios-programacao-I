#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
        float V;
        unsigned long N, M;
        srand((unsigned long)time(NULL));
        M = rand() % 1000000;

        printf("M: %lu", M);

        do{
              printf("Informe V e N: ");
              scanf("%f %lu ", &V, &N);

              if(V + N == 0) break;

              if(N%10000 == M%1000){
                     printf("%.2f\n", V * 3000);
              }else if(N%1000 == M%1000){
                     printf("%.2f\n", V * 500);
              }else if(N%100 == M%100){
                     printf("%.2f\n", V * 50);
              } else{

                     N = N%100;
                     M = M%100;

                     N = (N==0) ?  (100 - 1)/4 :  (N - 1)/4;
                     M = (M==0) ? (100 - 1)/4 :  (M - 1)/4;

                     if(N == M){
                            printf("%.2f\n", V * 16);
                     }else{
                            printf("0.00");
                     }
                 }
        }while(1);
    return 0;
}
