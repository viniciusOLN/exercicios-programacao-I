#include <stdio.h>

int main(){

    int x = 10;
    int *pt = NULL;

    pt = &x;

    printf("%p\n",&x); //endereço de memória da variável x.
    printf("%p\n",pt); //endereço de memória da variável referncia que no caso é x..
    printf("%p\n",&pt); //endereço de memória do ponteiro
    printf("%d\n", x); // conteudo da variavel x
    printf("%d",*pt); // conteudo da variavel pt q é o conteudo da variavel de referencia que neste caso é x = 10.

    return 0;
}
