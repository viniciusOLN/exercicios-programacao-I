#include <stdio.h>

int tabuada(int n, int end){
    int cont;
    int result;

    if(end ==0){
        return 0;
    }else{
        result = tabuada(n, (end-1)) * n;
        printf("O resultado de %i multiplicado por %i e igual a : %i\n",n, end, result);
        result = 0;
         cont++;
    }

}

int main(){

       int n = 0;
       int limit = 10;
       printf("Digite o numero que vc deseja a tabuada\n");
       scanf("%i", &n);

       tabuada(n,limit);

    return 0;
}
