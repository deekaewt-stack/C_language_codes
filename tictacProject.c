#include <stdio.h>
#include <stdbool.h>
void drawBoard(int column,int row,char board3x3[3][3]);
bool winnercheck(int column,int row,char board3x3[3][3]);
int main(){
    char ans;
    char ans2;
    int column=0;
    int row=0;
    char board3x3[3][3] = {0};
    bool a = true;
    while (a){
        while(true){
            printf("X Turn\n");
            printf("Enter column\n");
            scanf("%d",&column);
            printf("Enter row\n");
            scanf("%d",&row);
            ans='x';
            if (board3x3[column][row]==0){
                board3x3[column][row]=ans;
                drawBoard(column,row,board3x3);
                a = winnercheck(column,row,board3x3);
                break;
            }
            else{
                printf("Pick another spot\n");
                printf("\n");
            }
        }
        if (a==false) break;
        while(true){
            printf("O Turn\n");
            printf("Enter column\n");
            scanf("%d",&column);
            printf("Enter row\n");
            scanf("%d",&row);
            ans2='o';
            if (board3x3[column][row]==0){
                board3x3[column][row]=ans2;
                drawBoard(column,row,board3x3);
                a = winnercheck(column,row,board3x3);
                break;
            }
            else{
                printf("Pick another spot\n");
                printf("\n");
            }
        }
    }
    return 0;
}
void drawBoard(int column,int row,char board3x3[3][3]){
    for(int i = 0;i<3;i++){
        for(int r = 0; r<3; r++){
            printf("%c ",board3x3[i][r]);
        }
        printf("\n");
    }
}
bool winnercheck(int column,int row,char board3x3[3][3]){
    for (int i = 0; i<3;i++){
        if(board3x3[0][i]!=0&&board3x3[0][i]==board3x3[1][i]&&board3x3[1][i]==board3x3[2][i]){
            printf("The winner is %c\n",board3x3[0][i]);
            return false;
        }
        if(board3x3[i][0]!=0&&board3x3[i][0]==board3x3[i][1]&&board3x3[i][1]==board3x3[i][2]){
            printf("The winner is %c\n",board3x3[i][0]);
            return false;
        }
    }
    if(board3x3[0][0]!=0&&board3x3[0][0]==board3x3[1][1]&&board3x3[1][1]==board3x3[2][2]){
        printf("The winner is %c\n",board3x3[0][0]);
        return false;
    }
    if(board3x3[0][2]!=0&&board3x3[0][2]==board3x3[1][1]&&board3x3[1][1]==board3x3[2][0]){
        printf("The winner is %c\n",board3x3[0][2]);
        return false;
    }
    return true;
}
