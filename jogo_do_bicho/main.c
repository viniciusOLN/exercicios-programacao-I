#include <stdio.h>
#include <stdlib.h>

int main()
{
   int v, n, m = 0;


    printf("Digite o valor que deseja apostar\n");
    scanf("%i", &v);
    printf("\n Digite o numero que deseja apostar\n");
    scanf("%i", &n);
    printf("\n Digite o numero sorteado(adm):");
    scanf("%i", &m);

    float p = 0;


    // verificando com 4 numeros no final
    if(n%10000 == m%10000){
        p = v * 3000;
    }else{
        // verificando com 3 numeros no final
        if(n%1000 == m%1000){
            p = v * 500;
        }else{
              //verificando com 2 numeros no final
            if(((n%100 == m%100) && (n%100 - m%100) > 5) || ((n%100 == m%100) && (m%100 - n%100) > 5)
                    ||((n%100 == m%100) && (n%100 - m%100) == 0)|| ((n%100 == m%100) && (m%100 - n%100) ==0)){
                    p = v * 50;
            }else{
               //verificando com 2 numeros no final e se sao do mesmo grupo
                if(((n%100 - m%100) < 3 && (n%100 - m%100) > 0  ||(n%100 - m%100) == 3)  || ((m%100 - n%100) < 3) && (n%100 - m%100) > 0 ||(m%100 - n%100) ==3  ){
                        p = v * 16;
                        printf("%i",n);
                        printf("%i",m);
                }
            }
        }
    }

    printf("resultado %.f", p);
    return 0;
}
