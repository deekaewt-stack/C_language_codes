#include <stdio.h>
#include <stdbool.h>
float toCelsius(float num){
    float c = (num - 32)*5/9;
    printf("Celsius = %.2f\n", c);
    return c;
}
int main(){
    toCelsius(93.4);
    return 0;
}
