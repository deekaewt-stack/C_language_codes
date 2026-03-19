#include <stdio.h>
int main(){
char name [20] = "";
    int score = 0;
    printf("What is your name?\n");
    fgets(name,sizeof(name),stdin);
    printf("What is your score?\n");
    scanf("%d",&score);
    if (score>=90) {
        printf("You got A+");
    }
    else if (score>=80) {
        printf("You got B");
    }
    else if (score>=70) {
        printf("You got C");
    }
    else if (score>=60) {
        printf("You got D");
    }
    else if (score<50) {
        printf("You failed");
    }
    else{
        printf("Error");
    }

    
    return 0;
}
