#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
int main() {
    for (int i =0; i < 20; i++){
        printf("%d My name is Petch\n",i);
    }

    bool a = true;
    while(a == true){
        char a [50] = "";
        printf("What is your favorite animal?\n");
        scanf("%s",a);
        if(strcmp(a,"lion")==0) {
            break;
        }
    }
    return 0;
}
