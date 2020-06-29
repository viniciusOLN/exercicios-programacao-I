#include <stdio.h>

int main(){

    unsigned qTime, qPart, tPontos;

    do{

        printf("\n\n Quantidade de Times e Partidas:");
        scanf("%u %u", &qTime, &qPart);
        if(qTime + qPart ==0)break;
        tPontos = 0;
        for(int i  = 0; i < qTime; i++ ){
            char nome, ch;
            unsigned pontos;
            while((ch =getchar()) != '\n'  && ch !=EOF);
            printf("Nome do time e pontos:");
            scanf("%c %u", &nome, &pontos);
            tPontos = tPontos + pontos;
        }

        printf("Empates: %u", 3 * qPart - tPontos);
    }while(1);

    return 0;
}
