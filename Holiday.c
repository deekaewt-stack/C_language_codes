#include <stdio.h>
#include <string.h>
int main(){
    int days=0;
    int ans=0;
    printf("Enter days 1-7\n");
    scanf("%d",&days);
    switch(days){
        case 1:
            printf("Monday\n");
            printf("is it a public holiday?\n");
            scanf("%d",&ans);
            break;
        case 2:
            printf("Tuesday\n");
            printf("It's a public holiday?\n");
            scanf("%d",&ans);
            break;
        case 3:
            printf("Wednesday\n");
            printf("It's a public holiday?\n");
            scanf("%d",&ans);
            break;
        case 4:
            printf("Thursday\n");
            printf("It's a public holiday?\n");
            scanf("%d",&ans);
            break;
        case 5:
            printf("Friday\n");
            printf("It's a public holiday?\n");
            scanf("%d",&ans);
            break;
        case 6:
            printf("Saturday\n");
            printf("It's a public holiday?\n");
            scanf("%d",&ans);
            break;
        case 7:
            printf("Sunday\n");
            printf("It's a public holiday?\n");
            scanf("%d",&ans);
            break;
        default:
            printf("Please, input 1-7\n");
    }
    if (days==6 || days==7 || ans == 1){
        printf("Stay at home\n");
    }
    else{
        printf("go to work\n");
    }
    
    
    return 0;
}
