#include <stdio.h>
int sumDigits(int num);
int main(){
    int num = 0;
    printf("Enter your number: \n");
    scanf("%d",&num);
    printf("%d",sumDigits(num));
    
}
int sumDigits(int num){
    int sum = 0;
    while(num>0){
        sum = sum+(num%10);
        num = num / 10;
    }
    return sum;
}
