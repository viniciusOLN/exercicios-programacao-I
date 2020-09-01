#include <stdio.h>
#include <stdlib.h>
#define max 10

int main(){

    int num[max], contPar, contImpar;

    for(int i = 0; i < max; i++){
        printf("digite um numero");
        scanf("%d", &num[i]);
        if(num[i]%2==0){
            contPar++;
        }else{
            contImpar++;
        }
    }

    int par[contPar], impar[contImpar];
    int j = 0;
    int k = 0;

    for(int i = 0; i < max; i++){
        if(num[i]%2==0){
            par[j] = num[i];
            j++;
        }else{
            impar[k] = num[i];
            k++;
        }
    }

    printf("\nnúmeros pares: \n");
    for(int i = 0; i <contPar; i++){
        printf("%d", par[i]);
    }

    printf("\nnúmeros impares:\n");
    for(int i = 0; i < contImpar; i++){
        printf("%d", impar[i]);
    }


    return 0;
}
