#include <stdio.h>
int main(){
    int row = 0;
    int column = 0;
    int inputnum[100][100]= {0};
    printf("input row: \n");
    scanf("%d",&row);
    printf("input column: \n");
    scanf("%d",&column);
    for (int i = 0; i<row; i++){
        for(int r = 0; r<column; r++){
            printf("enter element: [%d][%d]\n",i,r);
            scanf("%d",&inputnum[i][r]);
        }
    }
    for (int i =0; i<row; i++){
        for (int r = 0; r<column; r++){
            printf("%d ",inputnum[i][r]);
        }
        printf("\n");
    }
    
    for (int i = 0; i<column; i++){
        for(int r = 0; r<row; r++){
            printf("%d ",inputnum[r][i]);
        }
        printf("\n");
    }
    printf("Transposed your arrays!\n");
    return 0;
    
}
