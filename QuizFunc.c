#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int scores = 0;
bool question1(){
    char answer[50];
    printf("Who is portugese footballer, iconic, number 7 currently plays in saudi league won 5 ballon d'or ?\n");
    scanf(" %[^\n]",answer);
    if (strcmp(answer,"Cristiano Ronaldo")==0||strcmp(answer,"CR7")==0||strcmp(answer,"C. Ronaldo")==0){
        printf("Correct!\n");
        scores+=10;
        printf("Current scores: %d\n",scores);
        return 1;
    }
    else{
        printf("Wrong!\n");
        return 0;
    }
}
bool question2(){
    char answer[50];
    printf("Who British driver from Mercedes team F1 winner in Melbourne grand prix?\n");
    scanf(" %[^\n]",answer);
    if (strcmp(answer,"GR63")==0||strcmp(answer,"George Russel")==0){
        printf("Correct!\n");
        scores+=10;
        printf("Current scores: %d\n",scores);
        return 1;
    }
    else{
        printf("Wrong!\n");
        printf("Current scores: %d\n",scores);
        return 0;
    }
}
bool question3(){
    char answer[50];
    printf("Who is a Dutch footballer during 1981 - 1992 retired due to ankle injury won 3 ballon d'or and brought Euro champion 1988 to Netherland\n");
    scanf(" %[^\n]",answer);
    if (strcmp(answer,"Marco Van Basten")==0||strcmp(answer,"Van Basten")==0||strcmp(answer,"MVB")==0){
        printf("Correct!\n");
        scores+=10;
        printf("Current scores: %d\n",scores);
        return 1;
    }
    else{
        printf("Wrong!\n");
        printf("Current scores: %d\n",scores);
        return 0;
    }
}
int main(){
    printf("For fully accurate answer write the answer in full name or abbreviaton of their name\n");
    question1();
    question2();
    question3();
    printf("RESULT: %d\n",scores);
    if (scores==30){
        printf("You got full scores on a quiz congrats!\n");
    }
    else if (scores==20){
        printf("Nice one on a quiz\n");
    }
    else if (scores==10){
        printf("Better than nothing!\n");
    }
    else{
        printf("It's fine atlest you tried your best!\n");
    }
}
