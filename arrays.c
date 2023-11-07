#include <stdio.h>

int main(){
    // char initials[4];
    char initials[] = {'A', 'T', 'E', 'A'};
    int i;

    // initials[0] = 'A';
    // initials[1] = 'T';
    // initials[2] = 'E';
    // initials[3] = 'A';

    printf("I am Toms the Optimist and my initials are; ");

    for(i = 0; i < 4; i++){
        printf("%c.", initials[i]);
    }

    printf("\n");
    return 0;
}


