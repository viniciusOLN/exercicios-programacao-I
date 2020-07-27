#include <stdio.h>
#include <stdlib.h>

// %[] dentro do scanf ele lê somente os caracteres indicados dentro dos colchetes até encontrar um valor diferente do indicado
// %[^] dentro do scanf significa negação, isto é, não lerá nada que tem dentro dos colchetes
//strcpy() - função de atribuição para strings. strcpy(st1, st2) - esta pegando o valor da string 2 para a string 1.
/*strcpm() - função de comparação de strings; strcmp(st1, st2) - está comparando st1 com st2 e retorna um valor inteiro que pode ser 1, 0 ou -1.
    0 - para iguais; st1 == st2
    1 - para uma string maior q a outra; st2 > st1
   -1 - para uma string menor q a outra: st2< st1
*/
//strlen() - le o tamanho de uma string

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
