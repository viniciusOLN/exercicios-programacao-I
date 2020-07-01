#include <stdio.h>

int tabuada(int n, int end){
    int cont;

    if(n%10 ==0){
        return 0;
    }else{
        cont++;
        printf("%i \n", n);

         return n * tabuada(n, (end-1));
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
