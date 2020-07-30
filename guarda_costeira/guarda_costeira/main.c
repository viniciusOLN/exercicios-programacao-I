#include <stdio.h>
#include <stdlib.h>

void carregar(float vf[], float vg[], float d[], int max){
    int a = 0;
    for(int i = 0; i < max; i++){
        printf("Digite a velocidade do fugitivo, da guarda costas e a distancia respectivamente(%d): ", i+1);
        scanf("%f %f %f", &vf[i], &vg[i], &d[i]);
    }

    for(int i = 0; i < max; i++){
        vf[i] = ((12 - d[i])/vf[i]);
        vg[i] = 12 - vg[i];
    }

    for(int i = 0; i < max; i++){
       if(vg[i] >= vf[i]){
            printf("s ");
       }else{
            printf("n ");
       }
    }
}

int main(){

    int max = 0;
    printf("quantidade de valores ");
    scanf("%d", &max);
    float vf[max];
    float vg[max];
    float d[max];
    char result[max];

    carregar(vf, vg, d, max);

    return 0;
}
