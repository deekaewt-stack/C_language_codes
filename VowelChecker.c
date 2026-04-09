#include <stdio.h>
#include <string.h>
int main(){
    char cha;
    printf("Input character: ");
    scanf("%c",&cha);
    if(cha  == 'a' ||cha  == 'e' ||cha  == 'i' ||cha  == 'o' ||cha  == 'u'){
        printf("It's a vowel");
    }
    else{
        printf("It's a consonant");
    }
    
    return 0;
}
