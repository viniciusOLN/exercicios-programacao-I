#include <stdio.h>
#include <stdlib.h>
#define max 5

void maior_valor(){
    int i, j;

    printf("Digite um valor: ");
    scanf("%d", &i);

    printf("Digite um valor: ");
    scanf("%d", &j);

    if(i > j){
        printf("Digite um valor: ");
        scanf("%d", &j);
    }else{
        printf("Digite um valor: ");
        scanf("%d", &i);
    }

    if(i > j){
        printf("Digite um valor: ");
        scanf("%d", &j);
    }else{
        printf("Digite um valor: ");
        scanf("%d", &i);
    }

    if(i > j){
        printf("Digite um valor: ");
        scanf("%d", &j);
    }else{
        printf("Digite um valor: ");
        scanf("%d", &i);
    }

    if(i > j){
        printf("O maior  valor e: %d", i);
    }else{
        printf("O maior valor e: %d ", j);
    }
}

void fatorial(){
    int n = 0;
    int a = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);

  for(int i = 1; i <= n;  i++){
     a = a * i;
  }
    printf("%d", a);
}

void carregar(int nota[], int jogador[], int limit){
    for(int i  = 0; i < limit; i++){
        jogador[i] = i + 1;
        printf("jogador[%d] nota:", i+1);
        scanf("%d", &nota[i]);
    }
}

void ordenar(int k[],int v[], int limit){
    int i, j, aux,aux2 = 0;

    for(i = 0; i < max - 1; i++){
        for(j = i +1; j< max; j++){
            if(v[j] > v[i]){
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;

                aux2 = k[j];
                k[j] = k[i];
                k[i] = aux2;
            }
        }
    }
}

void maior_jogador(){
    int jogador[max], nota[max];

    carregar(nota,jogador,max);

    int maior = nota[0];
    int pos = 0;

    for(int i = 1; i < max; i++){
        if(nota[i] > maior){
            maior =nota[i];
            pos = i;
        }
    }

    printf("O %d jogador foi o maior com a nota de %d",jogador[pos],  maior);

    ordenar(jogador,nota, max);

    printf("\n");

    for(int i = 0; i <3; i++){
        printf("(%d lugar)O jogador %d teve nota de: %d\n", i+1, jogador[i], nota[i]);
    }
}

int main(){

    //maior_valor();
    //fatorial();
    maior_jogador();
    return 0;
}
