#include <stdio.h>

// int main(){

//     int number;

//     printf("Enter a number from 1 - 7 to get a corresponsing day of the week\n=> ");
//     scanf("%d", &number);

//     switch(number){
//         case 1:
//             printf("Monday");
//             break;
//         case 2:
//             printf("Tuesday");
//             break;
//         case 3:
//             printf("Wednesday");
//             break;
//         case 4:
//             printf("Thursday");
//             break;
//         case 5:
//             printf("Friday");
//             break;
//         case 6:
//             printf("Saturday");
//             break;
//         case 7:
//             printf("Sunday");
//             break;
//     }

//     return 0;
// }

// int main(){

//     char op;
//     printf("Enter an operation \"A\" for Addition, \"S\" for Subtraction, \"M\" for Multiplication and \"D\" for Division\n");
//     scanf("%c", &op);
//     int num1;
//     int num2;
//     float result;

//     printf("CALCULATOR");

//     printf("\nEnter the first number\n=> ");
//     scanf("%d", &num1);

//     printf("Enter the second number\n=> ");
//     scanf("%d", &num2);

//     switch(op){
//         case 'A':
//             result = num1 + num2; 
//             printf("%d + %d = %.1f", num1, num2, result);
//             break;
//         case 'S':
//             result = num1 - num2; 
//             printf("%d - %d = %.1f", num1, num2, result);
//             break;
//         case 'M':
//             result = num1 * num2; 
//             printf("%d X %d = %.0f", num1, num2, result);
//             break;
//         case 'D':
//             result = (float) num1 / num2; 
//             printf("%d / %d = %.2f", num1, num2, result);
//             break;
//     }
// }


// int main(){

//     char letter;
//     printf("Enter any letter to check if it's a vowel or a consonant\n=> ");
//     scanf("%c", &letter);

//     switch(letter){
//         case 'a':
//         case 'e':
//         case 'i':
//         case 'o':
//         case 'u':
//         case 'A':
//         case 'E':
//         case 'I':
//         case 'O':
//         case 'U':
//             printf("The letter \"%c\" is a vowel", letter);
//             break;
//         default:
//             printf("The letter \"%c\" is a consonant", letter);
//             break;
//     }

//     return 0;
// }

// int main(){

//     int month;

//     char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

//     printf("Enter the number position of from (1 - January to 12 - December) to check the number of days in that month\n=> ");
//     scanf("%d", &month);

//     switch(month){
//         case 4: 
//         case 9:
//         case 6:
//         case 11:
//             printf("%s has 30 days", months[month - 1]);
//             break;
//         case 2:
//             printf("February has 28 days in non-leap years and 29 days in a leap year");
//             break;
//         default:
//             printf("%s has 31 days", months[month - 1]);
//             break;
//     }

//     return 0;
// }

int main(){

    int num;
    printf("Enter a number to check if it is an even or odd number\n=> ");
    scanf("%d", &num);

    int remainder = num % 2;

    switch(remainder){
        case 0:
            printf("%d is an even number", num);
            break;
        case 1:
            printf("%d is an odd number", num);
            break;
    }

    return 0;
}