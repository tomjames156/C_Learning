#include <stdio.h>

int main(){
    const int FNUMBER = 0;
    int lNumber = 7;
    const char FLETTER = 'T';

    printf("You got an encrypted message from %c*** \nwith the phone number %d*********%d.\n\n", FLETTER, FNUMBER, lNumber);
    // Add conditional to make this work
    printf("Enter 'yes' to view the message or 'no' to ignore the message");

    return 0;
}