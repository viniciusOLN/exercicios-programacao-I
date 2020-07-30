#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int D, Vf, Vg;
    while (scanf ("%d %d %d", &D, &Vf, &Vg)>0) {
         float S, Tg, Tf;
         S = sqrt (pow(D, 2) + 144);
         Tg = S/Vg;
         Tf = 12.0/Vf;
         printf("%f ", Tf);
         printf("%f ", Tg);
         if (Tg <= Tf) printf("S\n");
         else printf ("N\n");
    }

    return 0;
}
