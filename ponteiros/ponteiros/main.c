#include <stdio.h>

int main(){

    int x = 10;
    int *pt = NULL;

    pt = &x;

    printf("%p\n",&x); //endere�o de mem�ria da vari�vel x.
    printf("%p\n",pt); //endere�o de mem�ria da vari�vel referncia que no caso � x..
    printf("%p\n",&pt); //endere�o de mem�ria do ponteiro
    printf("%d\n", x); // conteudo da variavel x
    printf("%d",*pt); // conteudo da variavel pt q � o conteudo da variavel de referencia que neste caso � x = 10.

    return 0;
}
