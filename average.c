#include <stdio.h>

// A program that takes 10 integers using a loop and prints their average on the screen 

int main(){
    int i = 0;
    int number;
    int total = 0;

    while(i < 10){
        printf("Please enter a number\n=> ");
        scanf("%d", &number);
        total += number;
        i++;
    }

    float average = (float) total / 10;

    printf("Total: %d Average: %.3f", total, average);
    return 0;
}