#include <stdio.h>
#define LIN 3
#define COL 3

int main(){

    /*int m[LIN][COL];

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("item [%d, %d]", i,j);
            scanf("%d",&m[i][j]);
        }
    }

     for(int i = 0; i < LIN; i++){
        for(int j = 0; j< COL; j++){
            printf("%3d", m[i][j]);
        }
      printf("\n");
    }*/

    int m[3][3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j <3; j++){
            for(int k = 0; k < 3; k++){
                scanf("%d",m[i][j][k]);
            }
        }
    }

    return 0;
}
