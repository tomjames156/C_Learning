#include <stdio.h>

int main(){
    float price;
    int amount;
    float cost;
    float total = 0;
    float discount;

    printf("This program calculates the total cost of selected items.\n");
    printf("Enter the price and then the amount/number of items to continue.\nEnter '-1' to quit");

    while(1 == 1){
        printf("\n\n***NEW ITEM***");
        printf("\nPrice: $");
        scanf("%f", &price);

        if(price == -1){
            break;
        }

        printf("\nAmount (Number): ");
        scanf("%d", &amount);

        if(amount == -1){
            break;
        }

        cost = (float) price * amount;
        total += cost;
    }


    if(total > 1000){
        discount = (float) 0.1 * total;
        printf("\nYou got a $%.2f discount on $%.2f", discount, total);
        total -= discount;
    }

    printf("\nYour total is $%.2f", total);

    return 0;
}