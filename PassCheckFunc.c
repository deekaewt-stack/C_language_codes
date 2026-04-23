#include <stdio.h>
#include <stdbool.h>
bool checkPass(int password){
    if (password==1234){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int password = 0;
    for (int i =1;i<=3;i++){
        printf("Enter your password: \n");
        scanf("%d",&password);
        if (checkPass(password) == 1){
            printf("Access Granted\n");
            return 0;
        }
        else{
            printf("Access Denied\n");
        }
    }
    printf("Your account is locked\n");
    return 0;
}
