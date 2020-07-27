#include <stdio.h>
#include <stdlib.h>

// %[] dentro do scanf ele lê somente os caracteres indicados dentro dos colchetes até encontrar um valor diferente do indicado
// %[^] dentro do scanf significa negação, isto é, não lerá nada que tem dentro dos colchetes
//strcpy() - função de atribuição para strings. strcpy(st1, st2) - esta pegando o valor da string 2 para a string 1.


int main(){

    char nome[31] = "Vinicius Oliveira do Nascimento";
    printf("%s\n", nome);

    scanf("%[^\n]", nome);
    printf("%s", nome);

    int i;

    for(i = 0; nome[i] !='\0'; i++);
    printf("\nQuantidade de caracteres de %s: %d\n",nome,i);

    return 0;
}
