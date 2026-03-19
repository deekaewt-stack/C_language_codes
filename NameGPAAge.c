#include <stdio.h>
int main(){
    char name [20] = "";
    int age = 0;
    float GPA = 0;
    printf("What is your name?\n");
    fgets(name,sizeof(name),stdin);
    printf("How old are you?\n");
    scanf("%d",&age);
    printf("What is your GPA\n");
    scanf("%f",&GPA);
    
    printf("\n");
    printf("-----------------------");
    printf("\n");
    printf("Student name: %s", name);
    printf("age : %d\n", age);
    printf("GPA : %f\n",GPA);
    printf("-----------------------");
    return 0;
}
