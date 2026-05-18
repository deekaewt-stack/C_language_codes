#include <stdio.h>
#include <stdbool.h>
float tempsum(float temp[7]);
float maxtemp(float temp[7]);
float mintemp(float temp[7]);
float tempdisplay(float temp[7]);
int main()
{
    float temp[7];
    for (int i = 0 ;i < 7;i++){
        printf("Enter Day %d temperature\n",i+1);
        scanf("%f",&temp[i]);
    }
    tempsum(temp);
    maxtemp(temp);
    mintemp(temp);
    tempdisplay(temp);
}
float tempsum(float temp[7]){
    float tempsum3 = 0.0;
    float tempsum2 = 0.0;
    for(int i = 0;i<7;i++){
        tempsum3 = tempsum3+temp[i];
        tempsum2 = tempsum3/7;
    }
    printf("Average temp: %.2f\n",tempsum2);
    return tempsum2;
}
float maxtemp(float temp[7]){
    float tempmax=temp[0];
    for(int i = 0;i<7;i++){
        if(temp[i]>tempmax){
            tempmax = temp[i];
        }
    }
    printf("Max temp: %.2f\n",tempmax);
    return tempmax;
}
float mintemp(float temp[7]){
    float tempmin=temp[0];
    for(int i = 0;i<7;i++){
        if(temp[i]<tempmin){
            tempmin = temp[i];
        }
    }
    printf("Min temp: %.2f\n",tempmin);
    return tempmin;
}
float tempdisplay(float temp[7]){
    printf("---------Result----------\n");
    for (int i=0;i<7;i++){
        printf("Day %d, Temp: %.2f\n",i+1,temp[i]);
    }
}
