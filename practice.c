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


// int main(){
//     const int NUMERATOR = 22;
//     const int DENOMINATOR = 7;
//     float pie = (float) NUMERATOR / DENOMINATOR;

//     printf("Pi is equal to %.5f", pie);

//     return 0;
// }

// int main(){
//     // int myAge = 2022 - 2004;
//     // myAge++;

//     // printf("I am %d years old", myAge);
//     // return 0;
    
//     for(int i = 1; i <= 5; i++){
//         printf("%d\n", i);
//     }
//     printf("\n");
//     int score = 55;
//     score >= 60 ? puts("Passed\n"): printf("Failed.\nYou must take this course again");

//     puts("Yeahhhh");
//     return 0;
// }

// int main(){

//     int total = 0;
//     float average;
//     int grade = 0;
//     int count = 0;

//     while(grade != -1){
//         printf("Enter score: \n");
//         scanf("%d", &grade);
//         total += grade;
//         count += 1;
//     }

//     average = (float) total / count;


//     printf("Total: %d\nAverage = %.2f", total, average);
//     return 0;
// }

// int main(){
//     for(int i = 1; i <= 5; i++){
//         printf("%d\n", i);
//     }
//     return 0;
// }


// int main(){
//     const int sin = 20;
//     char response = 

//     printf("Damn you got a lotta sin\n");
//     printf("Would you like to be born again?\nENTER y for yes &  n for no\n=> ");
//     scanf("%c", &response);

//     if(response == 'y'){
//         printf("Okay that's cool");
//     }else if(response == 'n'){
//         printf("Okay then, have fun in hell. I guess...");
//     }else{
//         printf("It's a yes or no question please");
//     }

//     printf("\n");

//     return 0;
// }


// int main(){
//     int level;
//     char department = 'C';
//     char new_department;
//     char response;

//     printf("Would you like to change your department?\nEnter (y)es or (n)o\n=> ");
//     scanf("%c", &response);

//     while (response == 'y'){
//         printf("What level are you in? Enter your level below\n=> ");
//         scanf("%i", &level);

//         if(level % 100 != 0){
//             printf("There's no level like %d-level", level);
//             break;
//         }

//         if(level >= 300){
//             printf("You can no longer change your department because you have already completed 200 level");
//             break;
//         }else if(level <= 300){
//             printf("What department do you want to change to?\n(M)ath, (E)ngineering, (C)omputer Science, (L)aw\n");
//             scanf("%c", &new_department);
//         }else{
//             printf("Thanks for saving me the stress of updating your info");
//             break;
//         }
//     }

//     if(response != 'y' && response != 'n'){
//         printf("Invalid reponse provided\n");
//     }

//     if(new_department != department){
//         printf("Your new department is %c", new_department);
//     }else if(new_department == department){
//         printf("You are already a part of that department");  
//     }

//     return 0;
// }


int main(){
    int TEST_AGE = 30;

    TEST_AGE = 40;

    printf("%d", TEST_AGE);

    return 0;
}