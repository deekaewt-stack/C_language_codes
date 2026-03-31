#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=0;
    
    printf("How how many numbers do you want in array?\n");
    scanf("%d",&a);
    
    int arraysize[a];
    
    for (int i = 0;i<a;i++){
        printf("Enter the number to your list: ");
        scanf("%d",&arraysize[i]);
    }
    
    int max= arraysize[0];
    
    for (int i = 0;i<a;i++){
        if(arraysize[i]>max){
            max = arraysize[i];
        }
    }
    printf("Maximum number is: %d\n",max);
    return 0;
}
