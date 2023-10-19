# include <stdio.h>

// A function that converts distance in miles to kilometres

int main(){

    int miles;
    float kms;

    printf("Enter a distance in miles to convert it to kilometres: ");
    scanf("%d", &miles);

    kms = miles * 1.609;
    printf("\tConverting...\n");

    printf("\n%f kilometres", kms);

    return 0;
}