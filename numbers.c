#include <stdio.h>

int main(){

    printf("Numbers from 10 to 0 except 5\n");
    for(int i = 0; i <= 10; i++){
        if(i == 5){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}