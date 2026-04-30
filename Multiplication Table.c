#include <stdio.h>

void multiplicationTable(int rows, int column);
int main(){
    int rows = 0;
    int column = 0;
    printf("How many rows do you want: ");
    scanf("%d",&rows);
    printf("\n");
    printf("How many column do you want: ");
    scanf("%d",&column);
    printf("\n");
    
    multiplicationTable(rows, column);
    return 0;
}
void multiplicationTable(int rows, int column){
    for (int i = 1; i<= rows ; i++){
        for(int j = 1; j<= column; j++){
            printf("%d\t",i*j);
        }
    printf("\n");
    }
}
