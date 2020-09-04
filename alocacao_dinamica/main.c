#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;

    p = (int*) malloc(4 * sizeof(int));

    for(int i = 0; i < 4; i++){
        p[i] = i + 11;
    }

    for(int i = 0; i < 4; i++){
        printf("%d ", p[i]);
    }

    free(p);

    return 0;
}
