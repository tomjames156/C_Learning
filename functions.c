#include <stdio.h>

void greet();
int add(int x, int y);
void sum(int a, int b);
void difference(int a, int b);
void multiply(int a, int b);
void division(int a, int b);

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

void greet(){
    printf("Hey! How are you doing?");
}

int main(){
    char introduction[] = "I am Daenerys Stormborn, Breaker of Chains, Mother of Dragons e.t.c";
    char fullName[] = {'D', 'a', 'n', 'y', ' ', 'T', 'a', 'r', 'g', 's', '\0'};


    printf("%s", introduction);
    printf(" or %s for short\n", fullName);
    greet();
    printf("\n");
    return 0;
}

// int main(){
//     printf("***CALCULATOR***\nEnter an operation you would like to carry out;\nOptions:\n'A' - Add\n'S' - Subtraction\n'D' - Division\n'M' - Multiplication\n\n=> ");
//     char operation;
//     scanf("%c", &operation);

//     int num1;
//     int num2;

//     printf("Enter a first number\n=> ");
//     scanf("%i", &num1);

//     printf("Enter a second number\n=> ");
//     scanf("%i", &num2);


//     switch(operation){
//         case 'A':
//             sum(num1, num2);
//             break;
//         case 'M':
//             multiply(num1, num2);
//             break;
//         case 'D':
//             division(num1, num2);
//             break;
//         case 'S':
//             difference(num1, num2);
//             break;
//     }
//     return 0;
// }

int test(){
    int result = 0;
    printf("%d",result);
    return result;
}

// int test(int a, double b){
//     printf("%d", a * (int) b);
//     return a + b;
// }

int factorial(int n);

int factorial(int n){
    if(n > 1){
        return n * factorial(n - 1);
    }else{
        return 1;
    }
}

void fib(int a, int b, int len){
    int sum = a + b;
    printf(", %d", sum);
    len--;

    if(len > 0){
        fib(b, sum, len);
    }
}

int main(){

    int first = 1;
    int second = 2;
    int noOfElements = 5;

    printf("%d, %d", first, second);
    fib(1, 2, noOfElements - 2);

    // printf("%d", factorial(5));

    // int i, n, numbers[100], sum = 0;

    // printf("Enter the numbers of integers to calculate their sum\n=> ");
    // scanf("%d", &n);

    // printf("Enter %d integers: \n", n);

    // for(i = 0; i < n; i++){
    //     scanf("%d", &numbers[i]);
    //     sum += numbers[i];
    // }

    // printf("The sum of %d integers is: %d\n", n, sum);
    // float average = (float) sum / n;
    // printf("The average of elements is: %.2f", average);

    return 0;
}
