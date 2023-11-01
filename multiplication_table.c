#include <stdio.h>

int main(){
    int i;
    int j;
    int answer;

    printf("Multiplication table from 1 to 5 \n");
    for(i = 1; i <= 5; i++){
        for(j = 1; j <= 12; j++){
            answer = i * j;
            printf("%d X %d = %d\n", i, j, answer);
        }
        printf("\n\n");
    }

    return 0;
}