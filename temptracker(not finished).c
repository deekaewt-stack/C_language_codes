#include <stdio.h>
#include <stdbool.h>
int tempsum(int temp[7]);
int maxtemp(int temp[7]);
int mintemp(int temp[7]);
int tempdisplay(int temp[7]);
int main(){
    int temp[7];
    for (int i = 1; i <8;i++){
        printf("Enter Day %d temperature\n");
        scanf("%d",&temp[i]);
    }
    maxtemp(temp);
    mintemp(temp);
    tempsum(temp);
    tempdisplay(temp);
}
int tempsum(int temp[7]){
    int tempsum;
    int tempsum2;
    for(int i = 1;i<8;i++){
        tempsum = tempsum+temp[i];
        tempsum2 = tempsum/7;
    }
    printf("Average temp: %d",tempsum2);
}
