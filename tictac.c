#include <stdio.h>
#include <stdbool.h>
void drawBoard();
int main(){
    char ans;
    char ans2;
    int column=0;
    int row=0;
    char board3x3[3][3] = {0};
    bool a = true;
    while (a = true){
        printf("Enter X\n");
        scanf("%c",&ans);
        printf("Which column\n");
        scanf("%d",&column);
        printf("Which row\n");
        scanf("%d",&row);
        board3x3[row][column]=ans;
    }
    
}
