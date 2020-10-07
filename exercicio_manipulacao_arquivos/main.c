#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char in[50];
    char frase[90];
    char aux;
    FILE *fp = NULL;
    FILE *fpo = NULL;

     setlocale(LC_ALL, "Portuguese");

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", in);
    strcat(in, ".txt");

    if(fp = fopen(in, "r")){
        printf("Arquivo de entrada aberto!");

        printf("\n\nO arquivo de entrada tem os seguintes itens: ");

       while(fread(frase, sizeof(char), 90, fp)){
            printf("\n%s \n", frase);
       }
        fclose(fp);
    }else{
        printf("Arquivo não encontrado!");
    }

    in[50] = NULL;
    printf("\nDigite o nome do arquivo e saida: ");
    scanf("%s", in);
    strcat(in, ".txt");

    if(fpo = fopen(in, "w")){
        printf("\nArquivo de saida criado!\n");
        int tamanho = strlen(frase);

        for(int i = 0; i < tamanho/2; i++){
            aux = frase[i];
            frase[i] = frase[tamanho - i - 1];
            frase[tamanho - i - 1] = aux;
        }
        fwrite(frase, sizeof(char), tamanho, fpo);
        fclose(fpo);
        printf("\n Itens no arquivo de saida: \n");
        printf("%s\n\n", frase);

    }else{
        printf("\n\n erro ao criar o arquivo de saida!");
    }
    return 0;
}
