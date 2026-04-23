#include <stdio.h>
#include <stdbool.h>
int sumEven(int num);
int main(){
    int num = 0;
    int result= 0;
    printf("enter your number: \n");
    scanf("%d",&num);
    result = sumEven(num);
    printf("the sum of even numbers are: %d",result);
    return 0;
}

int sumEven(int num){
    int sum = 0;
    for (int i = 1; i<= num ; i++){
        if (i % 2 == 0){
            sum=sum+i;
        }
    }
    return sum;
}
