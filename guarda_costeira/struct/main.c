#include <stdio.h>
#include <stdlib.h>

#define max 5

// Declarar variáveis do tipo struct Conta
// struct Conta c3, c4;

struct Conta{
    int numero;
    float saldo;
};

// Não declara outras variáveis

struct{
    int numero;
    char nome;
} endereco1, endereco2;


// Declaro mais variáveis além das c9 e c8 já declaradas

struct Contaa{
    int nmero;
    float saldo;
} c9, c8;

// Posso declarar variáveis do tipo ContaBanco sem precisar utilizar o termo struct

typedef struct{
    int numero;
    float saldo;
} ContaBanco;

int main(){

    /*struct Conta c1;
    ContaBanco c2;
    c2.numero = 2;
    c2.saldo = 1000.5;
    c1.numero = 10;
    c1.saldo = 12345;

     printf("%d %.2f \n", c1.numero, c1.saldo);
     printf("%d %.2f", c2.numero, c2.saldo);*/

     ContaBanco conta[max];

     for(int i = 0; i < max; i++){
        printf("Digite o numero da conta: ");
        scanf("%d", &conta[i].numero);
        printf("\n Digite o saldo da conta: ");
        scanf("%f", &conta[i].saldo);
     }

     for(int i = 0; i < max; i++){
        printf("conta %d: \n", i + 1);
        printf("Numero da conta: %d", conta[i].numero);
        printf(" Saldo da conta: %f\n", conta[i].saldo);
     }

    return 0;
}
