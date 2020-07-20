#include <stdio.h>
#include <stdlib.h>

int recursao(int n){
    if(n <= 10){
        return n * 2;
    }else{
        return recursao(recursao(n / 3));
    }
}

int main(){

    int n = 0;
    printf("Digite um numero");
    scanf("%d", &n);
    printf("Recursao(%i): %i",n ,recursao(n));

    return 0;
}
