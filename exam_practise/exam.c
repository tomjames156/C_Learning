#include <stdio.h>

float calculatePurchase();
int evenSum();

// int main(){

//     int streetAddress;

//     printf("Enter the street address number to get the length");
//     printf("\nStreet Number: ");
//     scanf("%d", &streetAddress);

//     switch(streetAddress){
//         case 128:
//             printf("Rent: $500");
//             break;
//         case 204:
//             printf("Rent: $750");
//             break;
//         case 601:
//             printf("Rent: $609");
//             break;
//         case 609:
//             printf("Rent: $800");
//             break;
//         case 612:
//             printf("Rent: $940");
//             break;
//         default:
//             printf("You don't any building on that street");
//             break;
//     }

//     return 0;
// }

int evenNos(int numbers[20]);

int evenNos(int numbers[20]){
    int i;
    int counter = 0;

    for(i = 0; i < 20; i++){
        if(numbers[i] % 2 == 0){
            counter++;
        }
    }

    return counter;
}

int oddNos(int numbers[20]);

int oddNos(int numbers[20]){
    int i;
    int counter = 0;

    for(i = 0; i < 20; i++){
        if(numbers[i] % 2 == 1 || numbers[i] % 2 == -1){
            counter++;
        }
    }

    return counter;
}

int positiveNos(int numbers[20]);
int negativeNos(int numbers[20]);
int zeros(int numbers[20]);

// int main(){
//     int i;
//     int numbers[20];
//     int positive, negative, even, odd, zero;
//     positive = negative = even = odd = zero = 0;

//     printf("Enter 20 numbers to check which of them are even, odd, positive, negative or zero");

//     for(i = 0; i < 20; i++){
//         printf("\nNum %d: ", i + 1);
//         scanf("%d", &numbers[i]);
//     }

//     for(i = 0; i < 20; i++){
//         if(numbers[i] % 2 == 0){
//             even++;
//         }else{
//             odd++;
//         }

//         if(numbers[i] > 0){
//             positive++;
//         }else if(numbers[i] < 0){
//             negative++;
//         }else{
//             zero++;
//         }
//     }



//     printf("Out of the 20 numbers, %d are even numbers, ", even);
//     printf("are %d odd numbers, ", odd);
//     printf("are %d positive numbers, ", positive);
//     printf("are %d negative numbers, ", negative);
//     printf("and are %d zero", zeros(numbers));

//     return 0;
// }

int positiveNos(int numbers[20]){
    int i;
    int counter = 0;

    for(i = 0; i < 20; i++){
        if(numbers[i] > 0){
            counter++;
        }
    }

    return counter;
}

int negativeNos(int numbers[20]){
    int i;
    int counter = 0;

    for(i = 0; i < 20; i++){
        if(numbers[i] < 0){
            counter++;
        }
    }

    return counter;
}

int zeros(int numbers[20]){
    int i;
    int counter = 0;

    for(i = 0; i < 20; i++){
        if(numbers[i] == 0){
            counter++;
        }
    }

    return counter;
}

// int main(){

//     int num1;
//     int num2;
//     char operation;
//     int result;
//     float division;

//     printf("Calculator program");
//     printf("\nEnter two whole numbers and then an operand like + (addition), - (subtraction), * (multiplication), / (division), %% (modulus)");

//     printf("\nOperand: ");
//     scanf("%c", &operation);

//     printf("\n1st Number: ");
//     scanf("%d", &num1);

//     printf("\n2nd Number: ");
//     scanf("%d", &num2);

//     switch(operation){
//         case '+':
//             result = num1 + num2;
//             printf("%d + %d = %d", num1, num2, result);
//             break;
//         case '-':
//             result = num1 - num2;
//             printf("%d - %d = %d", num1, num2, result);
//             break;
//         case '*':
//             result = num1 * num2;
//             printf("%d X %d = %d", num1, num2, result);
//             break;
//         case '%':
//             result = num1 % num2;
//             printf("%d (mod %d) = %d", num1, num2, result);
//             break;
//         case '/':
//             division = (float) num1 / num2;
//             printf("%d / %d = %.2f", num1, num2, division);
//             break;
//         default:
//             printf("Invalid Operation");
//             break;
//     }

//     return 0;
// }

float calculatePurchase(){
    float cost;
    int num;
    float total = 0;
    float discount;
    
    printf("A program that calculates the total cost of your purchase.\nEnter 0 to end the program");
    
    while(1){
        printf("\nPrice: ");
        scanf("%f", &cost);
        if(cost == 0){
            break;
        }

        printf("\nNumber of Item: ");
        scanf("%d", &num);
        if(num == 0){
            break;
        }

        total += (float) cost * num;
    }

    if(total > 1000){
        discount = (float) total * 0.1;
        total = (float) total - discount;
        printf("You got a 10%% discount on your purchase");
    }

    return total;
}

int main(){
    float total = calculatePurchase();
    printf("The total purchase $%.2f", total);
    printf("\nSum of even numbers from 1 to 20 is %d", evenSum());

    return 0;
}

int evenSum(){
    int i;
    int total = 0;

    for(i = 1; i <= 20; i++){
        if(i % 2 == 0){
            total += i;
        }
    }

    return total;
}