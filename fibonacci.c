#include <stdio.h>

void fibonnaci(int first, int second, int len){
    // Prints a fibonacci series based on the first argument, second argument and the length of the series provided by the user

    int series[len];
    series[0] = first;
    series[1] = second;

    printf("%d %d ", series[0], series[1]);
    
    for(int i = 0; i < len - 2 ; i++){
        series[i + 2] = series[i] + series[i + 1];
        printf("%d ", series[i + 2]);
    }

}


int main(){

    int first;
    int second;
    int len;

    printf("FIBONACCI\n");
    printf("Get a Fibonacci by giving me two numbers and the length of the series\n");
    printf("Enter the first number\n=> ");
    scanf("%d", &first);

    printf("Enter the second number\n=> ");
    scanf("%d", &second);

    printf("Enter your desired length of the series\n=> ");
    scanf("%d", &len);

    fibonnaci(first, second, len);
    return 0;
}