#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
int main() {
    bool a = true;
    while (a == true){
        char secret [20] = "";
        printf("What is a secret word?\n");
        scanf("%s",secret);
        if (strcmp(secret,"banana")==0){
            printf("Correct\n");
            break;
        }
        else {
            printf("Try Again\n");
        }
    }
    return 0;
}
