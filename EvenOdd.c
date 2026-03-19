#include <stdio.h>
int main(){
int number = 0;
    printf("What is your number?\n");
    scanf("%d",&number);
    if (number % 2 == 0){
        printf("It's even number");
    }
    else{
        printf("It's odd number");
    }

    
    return 0;
}
