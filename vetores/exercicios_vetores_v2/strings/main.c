#include <stdio.h>
#include <stdlib.h>

// %[] dentro do scanf ele lê somente os caracteres indicados dentro dos colchetes até encontrar um valor diferente do indicado
// %[^] dentro do scanf significa negação, isto é, não lerá nada que tem dentro dos colchetes
//%20[^\n] - leria somente ate 20caracteres
//strcpy() - função de atribuição para strings. strcpy(st1, st2) - esta pegando o valor da string 2 para a string 1.
/*strcpm() - função de comparação de strings; strcmp(st1, st2) - está comparando st1 com st2 e retorna um valor inteiro que pode ser 1, 0 ou -1.
    0 - para iguais; st1 == st2
    1 - para uma string maior q a outra; st1 > st2
   -1 - para uma string menor q a outra: st1< st2
*/
//strcmpi() - case sensitive, fazendo a mesma coisa da função acima
//strcat(st1, st2) - função de concatenação, onde a primeira string recebe o conteúdo dela juntamente com o conteúdo da segunda string passada
//strlen() - le o tamanho de uma string
// for(i = 0; nome[i] !='\0'; i++);

int main(){

    char nome[31] = "Vinicius Oliveira do Nascimento";
    printf("%s\n", nome);

    scanf("%[^\n]", nome);
    printf("%s", nome);

    int i = strlen(nome);


    printf("\nQuantidade de caracteres de %s: %d\n",nome,i);

    return 0;
}
