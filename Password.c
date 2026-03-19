#include <stdio.h>
int main(){
char name [20] = "";
    int pass = 0;
    printf("What is your name?\n");
    fgets(name,sizeof(name),stdin);
    printf("What is password?\n");
    scanf("%d",&pass);
    if (pass == 1234) {
        printf("Access Granted");
    }
    else{
        printf("Access Denied");
    }
    
    return 0;
}
