#include <stdio.h>
void printAdvice(int choice);
int main(){
    int energy = 0;
    int ntasks=0;
    int choice=0;
    printf("Enter Energy Level:\n");
    scanf("%d",&energy);
    if (energy < 4){
        printf("You should rest or do light task\n");
    }
    else if(energy>7){
        printf("You should do high intensity task\n");
    }
    printf("How many times do you want to do the tasks?\n");
    scanf("%d",&ntasks);
    
    for (int i = 0; i<ntasks; i++){
        printf("Priotize a tasks\n");
        printf("1. for works\n 2. for chores\n 3. for hobby\n");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
                printf("Should focus\n");
                break;
            case 2:
                printf("Less focus\n");
                break;
            case 3:
                printf("last thing you should do\n");
                break;
            default:
                printf("Enter 1 - 3\n");
                break;
        }
    }
    printAdvice(choice);
}
void printAdvice(int choice){
    if (choice==1){
        printf("It always seems impossible until it's done.\n");
    }
    else if (choice==2){
        printf("Start where you are. Use what you have. Do what you can.\n");
    }
    else{
        printf("Success is never final; failure is never fatal. It's courage to continue that counts\n");
    }
}
