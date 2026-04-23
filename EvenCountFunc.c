#include <stdio.h>
#include <stdbool.h>

bool isEven(int num){
    if(num %2 ==0){
        printf("even\n");
        return 1;
    }
    else{
        printf("odd\n");
        return 0;
    }
}
int main(){
    int num;
    int count = 0;
    for (int i = 0 ; i<5 ; i++){
        printf("Enter number: \n");
        scanf("%d",&num);
        if(isEven(num) == 1){
            count++;
        }
    }
}
