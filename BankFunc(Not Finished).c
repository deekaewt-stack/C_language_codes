#include <stdio.h>
#include <stdbool.h>
void printHeader(){
    printf("----Welcome to Online Bank----\n");
    printf("1. Deposit\n");
    printf("2. Windrawal\n");
    printf("3. Buy\n");
}
float makeDeposit(float balance){
    float deposit = 0;
    printf("How much do you want to deposit: \n");
    scanf(" %f", &deposit);
    float newBalance = deposit + balance;
    printf("here's your total balance: %f\n", newBalance);
    return newBalance;
}
float makeWindrawal(float balance){
    float windrawal = 0;
    printf("How much do you want to windrawal: ");
    scanf(" %f",&windrawal);
    float newWindrawal = balance - windrawal;
    if (newWindrawal < 0){
        printf("Insufficient funds\n");
        newWindrawal = balance;
    }
    else{
        newWindrawal = balance - windrawal;
        printf("Your current balance: %f\n",newWindrawal);
    }
    return newWindrawal;
}
float canBuy(float balance){
    bool buy;
    char pricetag[5][50] = {"Chocolate","Book","Toys","Gift Card","Snack"};
    printf("1. Chocolate : 35 baht\n 2. Book : 425 baht\n 3. Toys : 800 baht\n 4. Gift Card : 500 baht\n 5. Snack : 40 baht\n");
    printf("Choose 1-5\n");
    int choices = 0;
    scanf("%d",&choices);
    switch(choices){
        case 1:
            if(balance>35){
                printf("Here your chocolate\n");
                balance = balance - 35;
                printf("Your current balance: %f\n",balance);
            }
            else{
                printf("Insufficient funds!\n");
            }
            break;
        case 2:
            if(balance>425){
                printf("Here your book\n");
                balance = balance - 35;
                printf("Your current balance: %f\n",balance);
            }
            else{
                printf("Insufficient funds!\n");
            }
            break;
        case 3:
            if(balance>800){
                printf("Here your toys\n");
                balance = balance - 35;
                printf("Your current balance: %f\n",balance);
            }
            else{
                printf("Insufficient funds!\n");
            }
            break;
        case 4:
            if(balance>500){
                printf("Here your Gift Card\n");
                balance = balance - 35;
                printf("Your current balance: %f\n",balance);
            }
            else{
                printf("Insufficient funds!\n");
            }
            break;
        case 5:
            if(balance>40){
                printf("Here your snack\n");
                balance = balance - 35;
                printf("Your current balance: %f\n",balance);
            }
            else{
                printf("Insufficient funds!\n");
            }
            break;
        default:
            printf("Invaild number!\n");
            break;
    }
    
    
}
int main(){
    bool a;
    int choice = 0;
    float balance = 0;
    while (a=1){
        printHeader();
        printf("Enter number: \n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                balance = makeDeposit(balance);
                break;
            case 2:
                balance = makeWindrawal(balance);
                break;
            case 3:
                canBuy(balance);
                break;
            default:
                printf("Invaild Number!\n");
                break;
        }
    }
    
    return 0;
}
