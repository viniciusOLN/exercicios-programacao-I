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

void contar_sexo(int s[], int n, int *m, int *f){
    for(int i = 0; i < n; i++){
        if(s[i]  ==0){
            (*m)++;
        }else{
            (*f)++;
        }
    }
}

int main(){

    int idade[max], sexo[max];
    int x,quantMaior, quantMenor = 0;
    int m = 0;
    int f = 0;

    srand((unsigned) time(NULL));

    for(int i = 0; i < max; i++){
        x = rand();
        idade[i] = x  % 120;
        sexo[i] = x % 2;
    }

    for(int i = 0; i < max; i++){
        printf("%d %d \t", sexo[i], idade[i]);
            if((i + 1) % 10 ==0) printf("\n");
    }

    quantMaior = maiorIdade(idade, max);
    quantMenor = menorIdade(idade, max);

    printf("\nmaiores: %d\n", quantMaior);
    printf("menores:%d\n",quantMenor);

    contar_sexo(sexo, max, &m, &f);
    printf("Mulheres: %d\n", f);
    printf("Homens: %d ",m);

    return 0;
}
