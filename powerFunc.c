#include <stdio.h>
int power();
int main(){
    int num = 0;
    int expo = 0;
    printf("enter you number: \n");
    scanf("%d",&num);
    printf("enter your exponent: \n");
    scanf("%d",&expo);
    power(num,expo);
    printf("%d power by %d is: %d",num,expo, power(num,expo));
    return 0;
}
int power(int num, int expo){
    int sum = 1;
    while (expo>0){
        sum*=num;
        expo--;
    }
    return sum;
}
