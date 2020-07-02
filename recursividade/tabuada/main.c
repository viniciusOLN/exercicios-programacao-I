#include <stdio.h>

int tabuada(int n, int end){
    int result = 0;

    if(end < 0){
        return 0;
    }else{
        tabuada(n, (end-1));
        result = n * end;
        printf("O resultado de %i multiplicado por %i e igual a : %i\n",n, end, result);
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
