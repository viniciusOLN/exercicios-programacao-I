#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define max 5

int* concatenaVet (int v1[], int n1, int v2[], int n2){
     int v3[n1 + n2];
     int *pt = &v3;

        for(int i = 0; i < n1; i++){
            v3[i]= v1[i];
        }

        pt = 5;
        for(int i =5; i < n2; i++){
            v3[i]= v2[i];
        }

    return *pt;
}

int main(){
    int v1[max], v2[max];

    srand((unsigned) time(NULL));
        for(int i = 0; i < max; i++){
            v1[i] = rand() % 101;
        }

        for(int i = 0; i < max; i++){
            v2[i] = rand() % 101;
        }

        printf("vetor 1: \n");
        for(int i = 0; i < max; i++){
            printf("%d ", v1[i]);
        }

        printf("\nvetor 2: \n");
        for(int i = 0; i < max; i++){
            printf("%d ", v2[i]);
        }

        printf("\n\n");
       int *n = concatenaVet (v1,max,v2,max);

       for(int i = 0; i < max+max; i++){
        printf("%p ", n);
       }


    return 0;
}
