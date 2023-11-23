#include <stdio.h>

// int main(){
//     int yearJoined;
//     int currentYear = 2023;
//     int yearsWorked;
    
//     printf("What year did you join the company?\n=> ");
//     scanf("%d", &yearJoined);

//     yearsWorked = currentYear - yearJoined;

//     if(yearsWorked > 3){
//         printf("Congratulations! You get a $2500 bonus");
//     }

//     return 0;
// }

// int main(){
//     int sum = 0;
//     int score;
//     int counter = 0;
//     float average;

//     printf("\nA program that calculates the average score of n students");
//     printf("Enter a score to continue or Enter -1 to quit the program");

//     while(1 == 1){
//         printf("\nScore\n=> ");
//         scanf("%d", &score);
//         if(score == -1){
//             break;
//         }
//         sum += score;
//         counter++;
//     }

//     average = (float) sum / counter;
//     printf("\nAverage : %.2f, out of %d students", average, counter);

//     return 0;
// }

// int main(){

//     int score;
//     printf("Enter a score to get the corresponding grade\n=> ");
//     scanf("%d", &score);

//     printf("That's ");

//     if(score >= 80){
//         printf("an A");
//     }else if(score >= 70){
//         printf("a B");
//     }else if(score >= 60){
//         printf("a C");
//     }else if(score >= 50){
//         printf("a D");
//     }else{
//         printf("an F");
//     }

//     return 0;
// }

// int main(){
//     int a;
//     int b;
//     printf("Enter two numbers a and b to compare them");
//     printf("\na: ");
//     scanf("%d", &a);

//     printf("\nb: ");
//     scanf("%d", &b);

//     if(a > b){
//         printf("a is greater than b");
//     }else if(a < b){
//         printf("a is less than b");
//     }else{
//         printf("a is equal to b");
//     }

//     return 0;
// }

int main(){
    int i;
    int sum = 0;

    for(i = 2; i <= 20; i += 2){
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}