#include <stdio.h>
int main(){
    int inputnum1 [2][2] = {0};
    int inputnum2 [2][2] = {0};
    int sum1 [2][2] = {0};
    for (int i = 0; i<2 ; i++){
        for (int r = 0; r<2; r++){
            printf("enter your number in matrix 1: \n");
            scanf("%d",&inputnum1[i][r]);
        }
    }
    for (int i = 0; i<2 ; i++){
        for (int r = 0; r<2; r++){
            printf("enter your number in matrix 2: \n");
            scanf("%d",&inputnum2[i][r]);
        }
    }
    for (int i = 0; i<2 ; i++){
        for (int r = 0; r<2; r++){
            sum1[i][r] = inputnum1[i][r]+inputnum2[i][r];
        }
    }
    printf("\n");
    for (int i = 0; i<2 ; i++){
        for (int r = 0; r<2; r++){
            printf("%d ",sum1[i][r]);
        }
        printf("\n");
    }
}
