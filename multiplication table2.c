#include <stdio.h>
#include <stdbool.h>
int main(){
    bool a = true;
    int size;
    int arraysize[20][20];
    int multitable[20][20];
    int choices;
    while(a){
        printf("Size for your table: ");
        scanf("%d",&size);
        printf("\n");
        if(size >=10){
            printf("invaild size\n");
            
        }
        else{
            arraysize[size][size];
            for(int i = 1; i<=size;i++){
            for(int j=1;j<=size;j++){
            multitable[i][j]=i*j;
            }
        }
        for (int i = 1; i<=size; i++){
            for(int j = 1; j<=size; j++){
                printf("%d ",multitable[i][j]);
            }
            printf("\n");
        }
        }
        printf("Want to leave now? (1. Yes 0.No): ");
        scanf("%d",&choices);
        printf("\n");
        if(choices==1){
            return 0;
        }
        else{
            continue;
        }
        

    }
}
