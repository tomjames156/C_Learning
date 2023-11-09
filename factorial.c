#include <stdio.h>

int factorial(int num){
    // Calculates the factorial of a number provided as an argument
    int i;
    int answer = 1;
    for(i = 1; i <= num; i++){
        answer *= i;
    }

    return answer;
}

int main(){
    int num;
    printf("Find the factorial of any number\nEnter a number below\n=> ");
    scanf("%d", &num);

    printf("\n%d! = %d\n", num, factorial(num));
    return 0;
}