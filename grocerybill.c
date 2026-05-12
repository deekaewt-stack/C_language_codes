#include <stdio.h>
int receipt(int quantities[20], int choice, float prices[20]);
void display(int quantities[20], int choice, float prices[20],float rec);
int main(){
    int quantities[20];
    int choice;
    float prices[20] = {2000,3.5,5,20,3500};
    float rec;
    printf("1. Iphone 2,000$\n 2. Fried Chicken 3.5$\n 3. Rice 5$\n 4. Car model 20$\n 5. Ipad 3,500$\n");
    printf("What do you want to buy: ");
    scanf("%d",&choice);
    printf("\n");
    printf("How many do you want to buy: ");
    scanf("%d",&quantities[0]);
    printf("\n");
    rec = receipt(quantities,choice,prices);
    display(quantities,choice,prices,rec);
}
int receipt(int quantities[20], int choice, float prices[20]){
    float total;
    switch(choice){
        case 1:
            total = prices[0]*quantities[0];
            if (total>1000){
                total = total - total*0.1;
            }
            return total;
            break;
        case 2:
            total = prices[1]*quantities[0];
            if (total>1000){
                total = total - total*0.1;
            }
            return total;
            break;
        case 3:
            total = prices[2]*quantities[0];
            if (total>1000){
                total = total - total*0.1;
            }
            return total;
            break;
        case 4:
            total = prices[3]*quantities[0];
            if (total>1000){
                total = total - total*0.1;
            }
            return total;
            break;
        case 5:
            total = prices[4]*quantities[0];
            if (total>1000){
                total = total - total*0.1;
            }
            return total;
            break;
        default:
            printf("Invaild Choices please try again later\n");
            break;
        }
}

void display(int quantities[20], int choice, float prices[20],float rec){
    switch(choice){
        case 1:
            printf("--------------------------------\n");
            printf("Item: Iphone\n");
            printf("price of item: %f\n",prices[0]);
            printf("Quantities of items: %d\n",quantities[0]);
            printf("total: %f\n",rec);
            printf("--------------------------------\n");
            break;
        case 2:
            printf("--------------------------------\n");
            printf("Item: Fried Chicken\n");
            printf("price of item: %f\n",prices[1]);
            printf("Quantities of items: %d\n",quantities[0]);
            printf("total: %f\n",rec);
            printf("--------------------------------\n");
            break;
        case 3:
            printf("--------------------------------\n");
            printf("Item: Rice\n");
            printf("price of item: %f\n",prices[2]);
            printf("Quantities of items: %d\n",quantities[0]);
            printf("total: %f\n",rec);
            printf("--------------------------------\n");
            break;
        case 4:
            printf("--------------------------------\n");
            printf("Item: Car Model\n");
            printf("price of item: %f\n",prices[3]);
            printf("Quantities of items: %d\n",quantities[0]);
            printf("total: %f\n",rec);
            printf("--------------------------------\n");
            break;
        case 5:
            printf("--------------------------------\n");
            printf("Item: Ipad\n");
            printf("price of item: %f\n",prices[4]);
            printf("Quantities of items: %d\n",quantities[0]);
            printf("total: %f\n",rec);
            printf("--------------------------------\n");
            break;
        default:
            printf("Invaild Number\n");
            break;
            
    }
}
