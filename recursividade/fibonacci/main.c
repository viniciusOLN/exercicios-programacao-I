#include <stdio.h>

int fibonacci(int n){

    int result;

        if (n == 1 || n == 0){
            return 1;
        }else {
             result = fibonacci(n - 1) + fibonacci(n - 2);
            printf("%i ", n);
        }

}


int main(){

    int n = 0;

    printf("Digite o digito ate que voce deseja mostrar a sequencia de fibonacci");
    scanf("%i", &n);

    fibonacci(n);

    return 0;
}
