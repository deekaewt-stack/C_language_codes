#include <stdio.h>
int main(){
    int inputnum[3][2] = {0};
    for (int i = 0; i<3; i++){
        for(int r = 0; r<2; r++){
            printf("Enter your number: \n");
            scanf("%d",&inputnum[i][r]);
        }
    }
    int sum = 0;
    for(int i = 0;i<3;i++){
        for(int r = 0; r<2; r++){
            sum = sum+inputnum[i][r];
        }
    }
    printf("\n");
    printf("%d",sum);
    return 0;
}
