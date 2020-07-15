#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max 50

int maiorIdade(int v[], int n){
    int id = 0;

    for(int i = 0; i < n; i++){
        if(v[i] >= 18){
            id++;
        }
    }
    return id;
}

int menorIdade(int v[], int n){
    int id = 0;

    for(int i = 0; i < n; i++){
        if(v[i] < 18){
            id++;
        }
    }
    return id;
}

int main(){

    int idade[max], sexo[max];
    int x, quantIdade,menIdade = 0;

    srand((unsigned) time(NULL));

    for(int i = 0; i < max; i++){
        x = rand();
        idade[i] = x  % 120;
        sexo[i] = x % 2;
    }

    quantIdade = maiorIdade(idade, max);
    menIdade = menorIdade(idade, max);
    for(int i = 0; i < max; i++){
        printf("%d %d \t", sexo[i], idade[i]);
            if((i + 1) % 10 ==0) printf("\n");
    }

    return 0;
}
