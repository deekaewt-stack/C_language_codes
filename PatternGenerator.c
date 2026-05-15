#include <stdio.h>
#include <stdbool.h>
void squareprint(int size);
void triangleprint();
void starprint();
int main(){
    int size;
    int choice;
    int choice2;
    bool a = true;
    while (a){
        printf("Pattern Generator\n");
        printf("1. Square Pattern\n");
        printf("2. Triangle Pattern\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Size of square: ");
                scanf("%d",&size);
                printf("\n");
                squareprint(size);
                break;
            case 2:
                printf("How tall is triangle: ");
                scanf("%d",&size);
                printf("\n");
                triangleprint(size);
                break;
            default:
                printf("Invaild choice\n");
                break;
            
        }
        printf("Continue making a pattern?\n");
        printf("1.Yes 0.No\n");
        scanf("%d",&choice2);
        if (choice2==1){
            continue;
        }
        else{
            break;
        }
    }
    
}
void squareprint(int size){
    for (int i = 0; i<size;i++){
        for(int r = 0; r<size;r++){
            printf("* ");
        }
        printf("\n");
    }
}
void triangleprint(int size){
    for (int i = 1; i<=size;i++){
        for(int r=1; r<= size - i;r++){
            printf(" ");
        }
        for (int k = 1; k<= (2*i-1); k++){
            if(k==1||k==(2*i-1)||i==size){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
