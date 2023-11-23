#include <stdio.h>

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

int main(){
    int i = 0;
    int numbers[20];

    printf("Enter 20 numbers to check which of them are even, odd, positive, negative or zero");

    while(i < 20){
        printf("\nNum: ");
        scanf("%d", &numbers[i]);
        i++;
    }

    printf("You entered %d even numbers, ", evenNos(numbers));
    printf("%d odd numbers, ", oddNos(numbers));
    printf("%d positive numbers, ", positiveNos(numbers));
    printf("%d negative numbers, ", negativeNos(numbers));
    printf("and %d zeros", zeros(numbers));

    return 0;
}

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