#include <stdio.h>
#include <stdlib.h>
#define max 5
int main(){

    int vet[max];
    int num;
    int vetB[max];
    FILE *fp = NULL;

    for(int i = 0; i < max; i++){
        printf("digite um numero: ");
        scanf("%d", &vet[i]);
    }

    if(fp = fopen("entrada.txt", "w")){
        for(int i = 0; i < max; i++){
            fprintf(fp, "%d \n", vet[i]);
        }
       printf("dados adicionados no arquivo com sucesso!");
       fclose(fp);
    }else{
        printf("deu erro!");
    }

    if(fp = fopen("entrada.txt", "r")){
        int j = 0;
        while(fread(num, sizeof(int), 1, fp)){
            vetB[j] = num;
            j++;
        }
        fclose(fp);
    }else{
        printf("erro ao abrir o arquivo!");
    }

    printf("\nvetor a: \n");
    for(int i = 0; i < max; i++){
        printf("%d ", vet[i]);
    }

     printf("\nvetor b: \n");
    for(int i = 0; i < max; i++){
        printf("%d ", vetB[i]);
    }


    return 0;
}
