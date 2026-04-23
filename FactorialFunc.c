#include <stdio.h>
int factorial(int num){
    int sum = 1;
    for (int i = 1 ; i <= num ; i++){
        sum = sum * i;
        printf("%d\n",sum);
    }
}
int main(){
    int num = 0;
    printf("Enter your number: \n");
    scanf("%d",&num);
    factorial(num);
}
