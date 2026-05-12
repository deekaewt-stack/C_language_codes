#include <stdio.h>
#include <stdbool.h>
void classroomdisplay(int classroomsize[10][10]);
int main(){
    int column;
    int answer;
    int row;
    int classroomsize[10][10];
    bool a = true;
    while(a){
        classroomdisplay(classroomsize);
        printf("Enter your seat (column and row)");
        printf("\n");
        printf("Your row and column start from 1\n");
        printf("enter column: ");
        printf("\n");
        scanf("%d",&column);
        printf("enter row: ");
        printf("\n");
        scanf("%d",&row);
        column = column-1;
        row = row-1;
        if (row>=0&&row<5&&column>=0&&column<5){
            if(classroomsize[column][row]==1){
                printf("It's already occupied\n");
            }
            else{
                classroomsize[column][row]=1;
                printf("Occupied your seat\n");
            }
        }
        else{
            printf("Invaild seat not in 1-5\n");
        }
        printf("Stop booking (answer 1 = yes 0 = no): ");
        scanf("%d",&answer);
        if(answer == 1){
            break;
        }
        else{
            continue;
        }
    }
    
    
}
void classroomdisplay(int classroomsize[10][10]){
    for (int i = 0; i<5 ; i++){
        for (int r = 0; r<5; r++){
            printf("%d ",classroomsize[r][i]);
        }
        printf("\n");
    }
}
