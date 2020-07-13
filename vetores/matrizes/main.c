#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3

int main(){

    int m[LIN][COL];

    for(int i = 0; i < LIN; i++){
        for(int j = 0; i< COL; i++){
            scanf("%d",&m[i][j]);
        }
    }

    return 0;
}
