#include <stdio.h>

void troca_valor(int x, int y) {

    int c = x;
    x = y;
    y = c;

    printf("x depois da troca: %i \ty depois da troca: %i",x,y);

}

void troca_referencia(int *x, int *y){

    int c = *x;
    *x = *y;
    *y = c;

}

int main(){

    int x, y = 0;

    printf("Digite dois numeros ");
    scanf("%i %i", &x, &y);

    printf("\ntroca por valor \n\n");
    printf("x antes da troca: %i \ty antes da troca: %i\t", x, y);

    troca_valor(x, y);

    printf("\n\n troca por referencia:\n\n");
    printf("x antes da troca: %i \ty antes da troca: %i\t", x, y);
    troca_referencia(&x,&y);
    printf("x depois da troca: %i \ty depois da troca: %i",x,y);

    return 0;
}
