#include <stdio.h>

void greet(){
    printf("Hey\n");
}

int add(int x, int y){
    int sum = y + x;
    printf("%d", sum);
    return sum;
}

void sum(int a, int b){
    int sum = a + b;
    printf("\nSum = %d\n", sum);
}

void difference(int a, int b){
    int diff = a - b;
    printf("\nDifference = %d\n", diff);
}

void multiply(int a, int b){
    int product = a * b;
    printf("\nProduct = %d\n", product);
}

void division(int a, int b){
    float answer = (float) a / b;
    printf("\nDivision = %.2f\n", answer);
}

int main(){
    printf("***CALCULATOR***\nEnter an operation you would like to carry out;\nOptions:\n'A' - Add\n'S' - Subtraction\n'D' - Division\n'M' - Multiplication\n\n=> ");
    char operation;
    scanf("%c", &operation);

    int num1;
    int num2;

    printf("Enter a first number\n=> ");
    scanf("%i", &num1);

    printf("Enter a second number\n=> ");
    scanf("%i", &num2);


    switch(operation){
        case 'A':
            sum(num1, num2);
            break;
        case 'M':
            multiply(num1, num2);
            break;
        case 'D':
            division(num1, num2);
            break;
        case 'S':
            difference(num1, num2);
            break;
    }
    return 0;
}