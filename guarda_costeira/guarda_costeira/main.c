#include <stdio.h>
#include <math.h>
#define milha 12

void carregar(float vf[], float vg[], float d[], int *max){
    for(int i = 0; i < max; i++){
        printf("Digite a distancia velocidade do fugitivo e velocidade do guarda respectivamente(%d): ", i+1);
        scanf("%f %f %f", &d[i], &vf[i], &vg[i]);
        if(vf[i] == 0 && vg[i] == 0 && d[i] == 0){
            *max = i;
            break;
        }
    }
}

void operacao(float vf[], float vg[], float d[], int max){
    for(int i = 0; i < max; i++){
        int dis = 0;
        dis = sqrt (pow(d[i], 2) + pow(milha,2));
        vf[i]= milha / vf[i];
        vg[i] = dis / vg[i];
    }
}

void mostrar(float vf[], float vg[], int max){
    for(int i = 0; i < max; i++){
       if(vg[i] <= vf[i]){
            printf("s ");
       }else{
            printf("n ");
       }
    }
}

int main(){

    int max = 100000;
    float vf[max];
    float vg[max];
    float d[max];
    char result[max];

    carregar(vf, vg, d, &max);
    operacao(vf, vg, d, max);
    mostrar(vf, vg, max);

    return 0;
}
