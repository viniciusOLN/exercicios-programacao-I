#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int idade[50], sexo[50];
    int x = 0;
    int y = 0;
    int masc = 0;
    int fem = 0;
    int maior = 0;
    int menor = 0;

    srand((unsigned) time(NULL));
    for(int i = 0; i < 20; i++){
            x = rand();
            y = rand() % 120;

        if(x % 2== 0){
            masc++;
        }else {
            fem++;
        }

        if(x >= 18){
            maior++;
        }else{
            menor++;
        }

    }

    printf("A quantidade de mulheres e de : %i\n", fem);
    printf("A quantidade de homens e de: %i\n",masc);
    printf("A quantidade de maiores de idade: %i\n", maior);
    printf("A quantidade de menores de idade:%i \n",menor);

    return 0;
}
