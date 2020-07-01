#include <stdio.h>

int fatorial(int n){

        int fat;

        if(n==1 || n==0){
            return 1;
        }else{
            fat = n * fatorial(n - 1);
        }

    return fat;
}


int main(){

    int n = 0;

    printf("Digite um numero \n");
    scanf("%i", &n);

    printf("O resultado do fatorial de %i e igual a: %i", n, fatorial(n));

    return 0;
}
