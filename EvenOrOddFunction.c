#include <stdio.h>
#include <stdbool.h>
bool isEven(int num){
    if (num%2==0){
        printf("It's even number\n");
        return true;
    }
    else{
        printf("It's odd number\n");
        return false;
    }
}
int main(){
    isEven(29);
    return 0;
}
