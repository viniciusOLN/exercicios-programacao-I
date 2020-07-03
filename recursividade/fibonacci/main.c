#include <stdio.h>

int fibonacci(int n){

    int cont;
    int result;

    if(cont == n){
        return n;
    }else{
        cont++;
      result =   n + fibonacci(n - 1);
      printf("%i ", result);
    }

}


int main(){

    int n = 0;

    printf("Digite o digito ate que voce deseja mostrar a sequencia de fibonacci");
    scanf("%i", &n);

    fibonacci(n);

    return 0;
}
