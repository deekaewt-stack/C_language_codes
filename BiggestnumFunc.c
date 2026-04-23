#include <stdio.h>
#include <stdbool.h>
int findMax(int a, int b, int c){
    int largestNumber = 0;
    if(a>b && a>c){
        printf("%d is the largest number\n",a);
        return largestNumber;
    }
    else if(b>a && b>c){
        printf("%d is the largest number\n",b);
        return largestNumber;
    }
    else if(c>a && c>b){
        printf("%d is the largest number\n",c);
        return largestNumber;
    }
}
int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Enter your number \n");
    scanf("%d",&a);
    printf("Enter your number \n");
    scanf("%d",&b);
    printf("Enter your number \n");
    scanf("%d",&c);
    findMax(a,b,c);
}
