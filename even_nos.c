#include <stdio.h>

int main(){

    printf("Even numbers from 10 to 0\n");
    for(int i = 10; i > 0; i-=2){
        printf("%d\n", i);
    }

    return 0;
}