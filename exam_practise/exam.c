#include <stdio.h>

float calculatePurchase();
int evenSum();

int factorial(int num);

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

void evenOddNumbers(int start, int stop);

void fibonacci(int num1, int num2, int len);

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

int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }else{
        return 1;
    }
}

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

// int main(){
//     // float total = calculatePurchase();
//     // printf("The total purchase $%.2f", total);
//     // printf("\nSum of even numbers from 1 to 20 is %d", evenSum());
//     evenOddNumbers(1, 20);
//     printf("\n3! = %d", factorial(3));
//     printf("\nFibonacci series: 3 + 5");
//     fibonacci(3, 5, 2);
//     printf(" + ...");

//     return 0;
// }

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

void evenOddNumbers(int start, int stop){
    int i;
    printf("Even numbers between %d and %d:", start, stop);
    for(i = start; i <= stop; i++){
        if(i % 2 == 0){
            printf(" %d,", i);
        }
    }

    printf("\nOdd Numbers between %d and %d:", start, stop);
    for(i = start; i <= stop; i++){
        if(i % 2 == 1){
            printf(" %d,", i);
        }
    }
}

void fibonacci(int num1, int num2, int len){
    if(len - 2 > 0){
        int result = num1 + num2;
        len--;
        printf(" + %d", result);
        fibonacci(num2, result, len);
    }
}

// int main(){
//     int counter = 0, total = 0, score = 0;
//     float average = 0;

//     while (counter < 10){
//         printf("Enter Score %d : ", counter + 1);
//         scanf("%d", &score);
//         total += score;
//         counter++;
//     }

//     average = (float) total / 10;
//     printf("\nAverage = %.2f", average);

//     return 0;
// }



// int main(){
//     int total = 0, start = 0, numbers = 0, limit = 0;
//     // printf("Get the sum of n natural numbers");
//     printf("\nEnter a number a start number : ");
    
//     scanf("%d", &start);
//     printf("\nEnter the number of numbers to add : ");
//     scanf("%d", &numbers);

//     printf("%d", start);
//     total += 2;
//     for(int i = start + 1; numbers > 1; --numbers){
//         total += i;
//         printf(" + %d", i);
//         i++;
//     }

//     printf(" = ");

//     printf("%d\n", total);

//     printf("\nEnter a number as the limit : ");
//     scanf("%d", &limit);
//     for(int i = 1; i <= limit; i++){
//         if(i % 2 == 0){
//             printf("%d ", i);
//         }
//     }

//     do{
//        printf("Yolo");
//        numbers++; 
//        if(numbers == 4){
//         break;
//        }
//     }while(numbers < 5);

//     for(int x = 0; x < 4; x++){
//         printf("\n");
//         for(int y = 0; y < 4; y++){
//             printf("%d", y);
//         }
//     }

//     printf("\n5! = %d", factorial(5));

//     return 0;
// }


int main(){
    int a = 3, b;
    printf("a = %d", a);
    b = a++;

    printf("\n\na = %d\nb = %d", a, b);
    return 0;
}