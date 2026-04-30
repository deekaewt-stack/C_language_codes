#include <stdio.h>
int main(){
    int masterkey = 18;
    int attempt = 0;
    int answer = 0;
    while(attempt<=10){
        printf("Guess a master key for 5 billion dollars\n");
        scanf("%d",&answer);
        if (answer==18){
            printf("You got 5 dollars!!\n");
            break;
        }
        
        else if (answer <=12){
            printf("too low\n");
        }
        else if (answer >= 24){
            printf("not close\n");
        }
        else if(answer >= 75){
            printf("not so close\n");
        }
        else if(answer >= 100){
            printf("Too large\n");
        }
        
        else if(answer<=23||answer>=13){
            printf("Extremly close!\n");
        }
    }
    return 0;
}
