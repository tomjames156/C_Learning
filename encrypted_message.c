#include <stdio.h>

int main(){
    const int FNUMBER = 0;
    int lNumber = 7;
    const char FLETTER = 'T';
    char response;

    printf("You got an encrypted message from %c*** \nwith the phone number %d*********%d.\n\n", FLETTER, FNUMBER, lNumber);

    printf("Enter 'y' to view the message or 'n' to ignore the message: ");
    scanf("%c", &response);

    if(response == 'y'){
        printf("\nWelcome to C programming.\nIt's kind of fun.\n\nFrom Tomisin,\n07068293037.");
    }

    return 0;
}