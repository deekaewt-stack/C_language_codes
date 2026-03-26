#include <stdio.h>
#include <math.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    int sub = 0;
    int mult = 0;
    int div = 0;
    int mod = 0;
    double power = 0;
    printf("What is your first number\n");
    scanf("%d",&num1);
    printf("What is your second number?\n");
    scanf("%d",&num2);
    sum = num1 + num2;
    sub = num1-num2;
    mult = num1*num2;
    div = num1/num2;
    mod = num1%num2;
    power = pow(num1, num2);
    printf("sum = %d\n sub = %d\n mult = %d\n div = %d\n mod = %d\n power = %f\n",sum,sub,mult,div,mod,power);
    return 0;
}
