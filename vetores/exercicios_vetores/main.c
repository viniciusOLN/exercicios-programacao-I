#include <stdio.h>
#define limite 10

void carregar(int v[], int limit){
    printf("Digite os numeros que deseja\n");
    for(int i = 0; i < limit; i++){
            printf("numero: ");
        scanf("%d", &v[i]);
    }
}

void mostrar(int v[], int limit){
    for(int i = 0; i < limit; i++){
        printf("%d ", v[i]);
    }
}

void maior(int v[], int limit){
    int m = v[0];
    for(int i = 0; i < limit; i++){
        if(v[i] > m){
            m = v[i];
        }
    }
    printf("\no maior valor dos inseridos e: %i", m);
}

void troca(int vet[], int limit){
    int n = 10;
    int aux;

    printf("antes da troca: \n");
    for(int i = 0; i < limit; i++){
        printf("v na posicao %i %d\n ", i, vet[i]);
    }
    for(int i = 0; i < limit; i++){
        aux = vet[i];
        vet[i] = vet[n];
        vet[n] = aux;
        n = n - 1;
        printf("v na posicao %i %d \n", i, vet[i]);
    }
}

int main(){

   int vet[10];

   carregar(vet, limite);
   mostrar(vet, limite);
   maior(vet, limite);
   troca(vet, limite);
    return 0;
}
