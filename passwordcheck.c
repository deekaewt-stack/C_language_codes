#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char password[20];
    int uppercasepass = 0;
    int lowercasepass = 0;
    int numberfound = 0;
    int isntnum = 0;
    printf("Enter your password: ");
    printf("\n");
    scanf("%s",password);
    for(int i =0;password[i] != '\0';i++){
        if(isupper((unsigned char)password[i])){
            printf("'%c' is uppercase\n",password[i]);
            uppercasepass++;
        }
        else if(islower((unsigned char)password[i])){
            printf("'%c' isnt uppercase\n",password[i]);
            lowercasepass++;
        }
        else if(isdigit(password[i])){
            printf("'%c' is number\n",password[i]);
            numberfound++;
        }
    }
    printf("We have %d uppercase found\n",uppercasepass);
    printf("We have %d lowercase found\n",lowercasepass);
    int passlenght = strlen(password);
    printf("password lenght %d\n",passlenght);
    printf("There is %d numbers found\n",numberfound);
    printf("---------------------------\n");
    printf("Suggestion\n");
    printf("---------------------------\n");
    if (passlenght < 8){
        printf("You should add more character into your password\n");
    }
    if(uppercasepass < 1){
        printf("You should add more uppercase character into your password\n");
    }
    if(numberfound < 1){
        printf("You should add more number into your password\n");
    }
    else{
        printf("Perfect Password\n");
    }
    
    
}
