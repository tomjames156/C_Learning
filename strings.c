#include <stdio.h>

int main(){
    char introduction[] = "I am Daenerys Stormborn, Breaker of Chains, Mother of Dragons e.t.c";
    char fullName[] = {'D', 'a', 'n', 'y', ' ', 'T', 'a', 'r', 'g', 's', '\0'};


    printf("%s", introduction);
    printf(" or %s for short", fullName);
    printf("\n");
    return 0;
}