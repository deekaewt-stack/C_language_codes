#include <stdio.h>
int main(){
    int lists[6];
    for(int i=0;i<6;i++){
        printf("Enter your number: ");
        scanf("%d",&lists[i]);
    }
    for(int i = 0; i<6; i++){
        if (lists[i] % 2 == 0){
            printf("These are your even number %d\n",lists[i]);
        }
    }
    return 0;
}
