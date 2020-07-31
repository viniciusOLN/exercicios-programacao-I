#include <stdio.h>
#include <time.h>
#define max 5

int* concatenaVet (int v1[], int n1, int v2[], int n2){
   int v3[n1 + n2];
    for(int i = 0; i < n1; i++){
        v3[i] = v1[i];
    }

    int j = 5;
    for(int i =0; i < n2; i++){
        v3[j] = v2[i];
        j++;
    }
    return v3[0];
}

void carregar(int v[], int m){
    for(int i = 0; i < max; i++){
        v[i] = rand() % 101;
    }
}

int mostrar(int v[], int m){
    for(int i = 0; i < m; i++){
        printf("%d ", v[i]);
    }
}

int main(){
    int v1[max], v2[max];
    int v3[max + max];

    srand((unsigned) time(NULL));
       carregar(v1, max);
       carregar(v2, max);

        printf("vetor 1: \n");
        mostrar(v1, max);

        printf("\nvetor 2: \n");
        mostrar(v2, max);

        printf("\n\n");
        int *pti = concatenaVet (v1,max,v2,max);

        printf("vetor 3: ");
        for(int i = 0; i < max*2; i++){
             //printf("%d ", v3[i]);
             printf("%d ", pti);
        }
    return 0;
}
