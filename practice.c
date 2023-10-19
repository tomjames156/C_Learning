#include <stdio.h>

/* Comments in C are basically 
like JavaScript comments 😂 */

// int main(){
//     int f_number = 0;
//     int l_number = 7;
//     char f_letter = 'T';

//     printf("You got an encrypted message from %c*** \nwith the phone number %d*********%d.\n\n", f_letter, f_number, l_number);
// Add conditional to make this work
//     printf("Enter 'yes' to view the message or 'no' to ignore the message");

//     return 0;
// }

int main(){
    int current_year = 2023;
    int birth_year, year_of_birth;
    int everything_password = 1234;
    int ig_pass, tiktok_pass, twitter_pass;
    ig_pass = tiktok_pass = twitter_pass = everything_password;

    printf("Please enter your year of birth: ");
    scanf("%d", &birth_year);
    year_of_birth = birth_year;

    printf("You will be %d years old by the end of the year\n", current_year - birth_year);
    printf("%i baby\n", year_of_birth);

    printf("POV you're a millenian; Your IG password - %d", tiktok_pass);

    return 0;
}