#include <stdio.h>
#include <math.h>

// int main(){

//     float temp;
//     int operation;
//     float result;

//     double root = 17 / sqrt(17);

//     if(root == sqrt(17)){
//         printf("Prime");
//     }

//     printf("%lf", root);

//     printf("A program that converts Celsius to Farenheit and vice versa");
//     printf("\nEnter \"1\" to convert from Celsius to Farenheit or \"2\" to convert from Farenheit to Celsius and \"0\" to quit\n=> ");
//     scanf("%d", &operation);

//     if(operation == 0){
//         return 0;
//     }

//     switch(operation){

//         case 1:
//             printf("\nEnter a temperature in Celsius\n=> ");
//             scanf("%f", &temp);
//             result = (float) (temp * 9/5) + 32;
//             printf("\n%.2f degrees Farenheit", result);
//             break;
//         case 2:
//             printf("\nEnter a temperature in Farenheit\n=> ");
//             scanf("%f", &temp);
//             result = (float) (temp - 32) * 5/9;
//             printf("\n %.2f degrees Celsius", result);
//             break;
//     }

//     return 0;

// }

// int main(){
//     int num1;
//     int num2;
//     int num3;
//     int maxVal;

//     printf("Enter three numbers to find the maximum of the three\n=> ");
//     scanf("%d", &num1);
//     printf("\n=> ");
//     scanf("%d", &num2);
//     printf("\n=> ");
//     scanf("%d", &num3);

//     if(num1 >= num2 && num1 >= num3){
//         maxVal = num1;
//     }
    
//     if(num2 >= num1 && num2 >= num1){
//         maxVal = num2;
//     }

//     if(num3 >= num1 && num3 >= num2){
//         maxVal = num3;
//     }

//     printf("%d", maxVal);
//     return 0;
// }

int main(){
    int num;
    int n;
    int isPrime = 1;

    printf("Enter a number to check if it is positive, negative, even, and or odd\n=> ");
    scanf("%d", &num);

    if(num < 0){
        printf("The number is negative");
    }else{
        printf("The number is positive");
    }

    if(num % 2 == 0){
        printf(" and is an even number");
    }else{
        printf(" and is an odd number");
    }

    for(n = 2; n <= num / 2; n++){
        if(num % n == 0){
            isPrime = 0;
        }
    }

    if(!isPrime){
        printf(" %d is not a prime number", num);
    }else{
        printf(" %d is a prime number", num);
    }

    return 0;
}

// int main(){
//     int age;
//     printf("Enter your age to check if you are eligible to vote");
//     printf("\nHow old are you\n=> ");

//     scanf("%d", &age);

//     if(age < 18){
//         printf("You are not eligible to vote till you're 18");
//     }else{
//         printf("You are eligible to vote");
//     }

//     return 0;
// }

// int main(){

//     int side1;
//     int side2;
//     int side3;

//     printf("Enter the three sides of a triangle to see if it is equilateral, isosceles");

//     printf("\nEnter the length of the first side\n=> ");
//     scanf("%d", &side1);

//     printf("\nEnter the length of the second side\n=> ");
//     scanf("%d", &side2);

//     printf("\nEnter the length of the third side\n=> ");
//     scanf("%d", &side3);

//     if(side1 == side2 && side1 == side3){
//         printf("\nIt is an equilateral triangle");
//     }else if(side1 == side2  || side2 == side3 || side1 == side3){
//         printf("\nIt is an isosceles triangle");
//     }else{
//         printf("\nIt is a scalene triangle");
//     }

//     return 0;
// }