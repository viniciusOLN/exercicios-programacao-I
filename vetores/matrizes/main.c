#include <stdio.h>
#include <stdlib.h>

#define LIN 3
#define COL 3

int main(){

    int m[LIN][COL];

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j< COL; j++){
            printf("item [%d, %d]", i,j);
            scanf("%d",&m[i][j]);
        }
    }

     for(int i = 0; i < LIN; i++){
        for(int j = 0; j< COL; j++){
            printf("%3d", m[i][j]);
        }
      printf("\n");
    }

    return 0;
}
