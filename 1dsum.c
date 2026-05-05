#include <stdio.h>
int main(){
    int inputnum[5]= {0};
    int sum = 0;
    for (int i = 0; i<5; i++){
        printf("Enter your number: \n");
        scanf("%d",&inputnum[i]);
    }
    for(int r = 0; r<5; r++){
        sum = sum+inputnum[r];
    }
    printf("\n");
    printf("%d",sum);
    
}
