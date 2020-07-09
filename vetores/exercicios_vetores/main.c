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
    int n = limit - 1;
    int aux;

    printf("antes da troca: \n");
    for(int i = 0; i < limit; i++){
        printf("v na posicao %i %d\n ", i, vet[i]);
    }

    printf("\n");

    for(int i = 0; i < limit/2; i++){
        aux = vet[i];
        vet[i] = vet[n];
        vet[n] = aux;
        n = n - 1;
    }

    for(int i = 0; i < limit; i++){
         printf("v na posicao %i %d \n", i, vet[i]);
    }
}

void busca(int v[], int limit){
    int m;
    printf("\nDigite o valor que deseja procurar: \n");
    scanf("%d", &m);

    for(int i = 0; i < limit; i++){
        if(v[i] == m){
            printf(" \nvalor encontrado na posicao %i", i);
        }
    }
}

int main(){

   int vet[10];

       carregar(vet, limite);
       mostrar(vet, limite);
       maior(vet, limite);
       troca(vet, limite);
       busca(vet, limite);
    return 0;
}
