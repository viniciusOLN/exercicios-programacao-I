#include <stdio.h>

int main(){

    int x = 10;
    int *pt = NULL;

    pt = &x;

    printf("%i",pt);
    printf("\n%i",x);
    pt = 10;

    printf("\n %i", pt);
    printf("\n%i", x);

    return 0;
}
