#include <stdio.h>

/* Comments in C are basically 
like JavaScript comments 😂 */

// int main(){
//     int current_year = 2023;
//     int birth_year, year_of_birth;
//     int everything_password = 1234;
//     int ig_pass, tiktok_pass, twitter_pass;
//     ig_pass = tiktok_pass = twitter_pass = everything_password;

//     printf("Please enter your year of birth: ");
//     scanf("%d", &birth_year);
//     year_of_birth = birth_year;

//     printf("You will be %d years old by the end of the year\n", current_year - birth_year);
//     printf("%i baby\n", year_of_birth);

//     printf("POV you're a millenian; Your IG password - %d", tiktok_pass);

//     return 0;
// }


int main(){
    const int NUMERATOR = 22;
    const int DENOMINATOR = 7;
    float pie = (float) NUMERATOR / DENOMINATOR;

    printf("Pi is equal to %.5f", pie);

    return 0;
}