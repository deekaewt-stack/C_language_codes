#include <stdio.h>
#include <stdbool.h>
void printHeader(){
    printf("----Welcome to Online Bank----\n");
}
float makeDeposit(float balance){
    float deposit = 0;
    printf("How much do you want to deposit: \n");
    scanf("%f", &deposit);
    float newBalance = deposit + balance;
    printf("here's your total balance: %f", newBalance);
    return newBalance;
}
int main(){
    printHeader();
    float balance = 500;
    makeDeposit(balance);
    return 0;
}
