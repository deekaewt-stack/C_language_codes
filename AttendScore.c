#include <stdio.h>
int main(){
    int scores = 0;
    int attend = 0;
    printf("What is your scores 0-100\n");
    scanf("%d",&scores);
    printf("Class Attended 0-100\n");
    scanf("%d",&attend);
    if(scores>=50){
        if(attend>=75){
            printf("Passed");
        }
        else{
            printf("Failed due to low attendance");
        }
    }
    if(scores<50){
        if(attend>=75){
            printf("Failed due to low scores");
        }
        else{
            printf("Failed Academic Probation suggested");
        }
    }
    return 0;
}
