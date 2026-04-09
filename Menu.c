#include <stdio.h>
void sandwich(){
    printf("First add bread\n");
    printf("Second add vegetable\n");
    printf("Third add egg\n");
    printf("Fourth add some pepper\n");
    printf("Last add another bread\n");
}
int main(){
    int choice=0;
    printf("What do you want to eat today?\n");
    printf("1. sandwich\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice==1){
        sandwich();
    }
    else{
        printf("Not in the menu\n");
    }
    return 0;
}
