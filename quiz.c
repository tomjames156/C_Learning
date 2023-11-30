#include <stdio.h>

int main(){
    char name[30];
    int phoneNum;
    char response;
    printf("Hey there I'm Tomisin, I think you cool, would you be interested in a FRIENDSHIP\nEnter 'y' for YES and 'n' for NO\n=> ");
    scanf("%c", &response);

    if(response == 'y'){
        printf("That's nice of you. So just some 2 more questions and we're done");
    }else if(response == 'n'){
        printf("That's alright, have a nice day");
        return 0;
    }

    printf("What's your name? ");
    scanf("%*c", name);

    printf("%s what a nice name");

    printf("What's your phone number (Whatsapp)");
    scanf("%d", &phoneNum);

    printf("I'll add you ASAP, Thanks for your time");

    return 0;
}