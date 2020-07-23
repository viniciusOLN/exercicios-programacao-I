#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define max 5

int* concatenaVet (int v1[], int n1, int v2[], int n2){
     int v3[max * 2];
     int *pt = &v3;

        for(int i = 0; i < n1; i++){
            *pt = v1[i];
            pt = pt + 1;
        }

        pt = 5;
        for(int i =5; i < n2; i++){
            *pt = v2[i];
            pt = pt + 1;
        }

    return 0;
}

int main(){
    int v1[max], v2[max];
    int v3[max * 2];


    srand((unsigned) time(NULL));
        for(int i = 0; i < max; i++){
            v1[i] = rand() % 101;
        }

        for(int i = 0; i < max; i++){
            v2[i] = rand() % 101;
        }

        concatenaVet (v1,max,v2,max);

        for(int i = 0; i < max*2; i++){
            printf("%d  ", v3[i]);
        }

    return 0;
}
