#include <stdio.h>

// A function that converts distance in miles to kilometres

int main(){

    float miles;
    float kms;

    printf("Enter a distance in miles to convert it to kilometres: ");
    scanf("%f", &miles);

    kms = miles * 1.609;
    printf("\t...Converting...");

    printf("\n%.3f kilometres", kms); // Prints the answer to 2 decimal places

    return 0;
}