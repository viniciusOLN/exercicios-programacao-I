#include <stdio.h>
#include <stdlib.h>

void carregar(int vf[], int vg[], int d[], int max){

    for(int i = 0; i < max; i++){
        printf("Digite a velocidade do fugitivo, da guarda costas e a distancia respectivamente(%d): ", i+1);
        scanf("%d %d %d", &vf[i], &vg[i], &d[i]);
        if(i == (max - 1)){
            vf[max - 1] = 0;
            vg[max - 1] = 0;
        }
    }
}

void mostrar(int v[], int m){

    for(int i = 0; i < m; i++){
        printf("%d ",v[i]);
    }

}

int main(){

    int max = 0;
    printf("quantidade de valores ");
    scanf("%d", &max);
    int vf[max], vg[max], d[max];
    char result[max];

    carregar(vf, vg, d, max);
    mostrar(vf, max);

    return 0;
}
