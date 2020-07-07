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

void soma_valor(int x, int y){
    printf("a soma de %i e %i e igual a: %i",x,y, (x + y));
}

void somaProd_valor(int x, int y){
    printf("a soma de %i e %i e igual a: %i\n",x,y, (x + y));
    printf("a multiplicacao de %i e %i e igual a: %i\n",x,y, (x * y));
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

    printf("\n\n soma dos dois valores por passagem de valor(2 questao):\n");
    soma_valor(x, y);

    printf("\n\n produto e soma dos valores por passagem de valor(3 questao):\n");
    somaProd_valor(x, y);

    return 0;
}
