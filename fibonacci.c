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
    fibonnaci(2, 3, 8);
    return 0;
}