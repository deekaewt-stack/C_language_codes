#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char password[20];
    int uppercasepass = 0;
    int lowercasepass = 0;
    printf("Enter your password: ");
    printf("\n");
    scanf("%s",password);
    for(int i =0;password[i] != '\0';i++){
        if(isupper((unsigned char)password[i])){
            printf("'%c' is uppercase\n",password[i]);
            uppercasepass++;
        }
        else{
            printf("'%c' isnt uppercase\n",password[i]);
            lowercasepass++;
        }
    }
    printf("We have %d uppercase found\n",uppercasepass);
    printf("We have %d lowercase found\n",lowercasepass);
    int passlenght = strlen(password);
    printf("password lenght %d\n",passlenght);
    
    
}
