#include <stdio.h>
int isPrime(int num);
int main(){
    int num = 0;
    printf("enter your number: \n");
    scanf("%d",&num);
    if (isPrime(num)==1){
        printf("%d is prime number\n",num);
    }
    else{
        printf("%d isnt prime number\n",num);
    }
    return 0;
}
int isPrime(int num){
    if (num<2){
        return 0;
    }
    
    for(int i = 2; i <= num / 2;i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
    
}
