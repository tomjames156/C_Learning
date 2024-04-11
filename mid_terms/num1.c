#include <stdio.h>

// int main(){
//     float price;
//     int amount;
//     float cost;
//     float total = 0;
//     float discount;

//     printf("This program calculates the total cost of selected items.\n");
//     printf("Enter the price and then the amount/number of items to continue.\nEnter '-1' to quit");

//     while(1 == 1){
//         printf("\n\n***NEW ITEM***");
//         printf("\nPrice: $");
//         scanf("%f", &price);

//         if(price == -1){
//             break;
//         }

//         printf("\nAmount (Number): ");
//         scanf("%d", &amount);

//         if(amount == -1){
//             break;
//         }

//         cost = (float) price * amount;
//         total += cost;
//     }


//     if(total > 1000){
//         discount = (float) 0.1 * total;
//         printf("\nYou got a $%.2f discount on $%.2f", discount, total);
//         total -= discount;
//     }

//     printf("\nYour total is $%.2f", total);

//     return 0;
// }

int factorial(int num);
int oddOrEven(int num);

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }else{
        return 1;
    }
}

int oddOrEven(int num){
    if(num % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}

int isPrime(int num){
    int output = 1;
    for(int i = 2; i <= num / 2; i++){
        if(num % i == 0){
            output = 0;
            break;
        }
    }

    return output;
}

// int main(){
//     int suite =  3;
//     // int goals;
//     // printf("Enter the number of goals scored against Nigeria\n=> ");
//     // scanf("%d", &goals);
//     // if(goals >= 5){
//     //     goto sos;
//     // }else{
//     //     // printf("All soccer players should learn C\n");
//     //     goto celebrate;
//     // }sos: {
//     //     printf("Get ready for the next match");
//     // }celebrate: {
//     //     printf("\nOLE X4");
//     // }
//     // char letter;

//     // printf("Enter a letter in a name\n=> ");
//     // scanf("%c", &letter);

//     // switch(letter){
//     //     case 'T':
//     //     case 't':
//     //     case 'I':
//     //     case 'm':
//     //     case 'M':
//     //     case 'i':
//     //     case 'o':
//     //         printf("Tomi");
//     //         break;
//     //     case 'e':
//     //     case 'E':
//     //         printf("Temi");
//     //         break;
//     // }

//     return 0;
// }


int main(){
    int option;
    int number;

    while(1){
        printf("\n\nEnter an option from the options given below\n1 - Factorial\n2 - Even or Odd\n3 - Prime Number or Not\n4- Quit\n=> ");
        scanf("%d", &option);

        if(option == 4){
            printf("\nThanks for using the program :)");\
            break;
        }
        
        switch(option){
            case 1:
                printf("\nEnter a number to find it's factorial\n=> ");
                scanf("%d", &number);
                printf("\n%d! = %d", number, factorial(number));
                break;
            case 2:
                printf("\nEnter a number to find it's even or odd\n=> ");
                scanf("%d", &number);
                if(oddOrEven(number)){
                    printf("\n%d is an even number", number);
                }else{
                    printf("\n%d is an odd number", number);
                }
                break;
            case 3:
                printf("\nEnter a number to find if it's a prime number\n=> ");
                scanf("%d", &number);
                if(isPrime(number)){
                    printf("\n%d is a prime number", number);
                }else{
                    printf("\n%d is not a prime number", number);
                }
                break;
        }
    }
}