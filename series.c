#include <stdio.h>

int main(){
    int i;
    int total = 0;

    for(i = 5; i <= 50; i+=3){
        total += i;
    }

    printf("The sum of the series: 5 + 8 + 11 + ... + 50 = %d", total);

    return 0;
}