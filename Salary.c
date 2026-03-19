#include<stdio.h>
int main(){
char name [20] = "";
    float salary = 0;
    float bonus = 0;
    printf("What is your name?\n");
    fgets(name,sizeof(name),stdin);
    printf("How much is your salary?\n");
    scanf("%f",&salary);
    if (salary >= 50000){
        bonus = (salary* 0.1) + salary;
        printf("Your salary with bonus included is %f",bonus);
    }
    else{
        bonus = (salary*0.05)+salary;
        printf("Your salary with bonus included is %f",bonus);
    };
    
    return 0;
}
