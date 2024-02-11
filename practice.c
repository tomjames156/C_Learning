#include <stdio.h>
#include <stdbool.h>

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


// int main(){
//     int TEST_AGE = 30;

//     TEST_AGE = 40;

//     printf("%d", TEST_AGE);

//     return 0;
// }

// int main(){
//     int age;

//     printf("How old are you?\n=> ");
//     scanf("%d", &age);

//     printf("%d\n", age >= 18);

//     if(age == 18){
//         printf("Alright, alright, you can now vote");
//     }else if(age > 18){
//         printf("Please vote. You're older than enough");
//     }else{
//         printf("Try again when you're in %d years\n", 18 - age);
//     }

//     return 0;
// }

// int main(){
//     int bday;
//     bool correct = false;

//     while(!correct){
//         printf("When is my birthday\n=> ");
//         scanf("%i", &bday);

//         if(bday == 28){
//             correct = true;
//             printf("%d\n", correct);
//             printf("Yup, that's right March 28th");
//         }else if(bday < 28){
//             printf("%d\n", correct);
//             printf("Wrong! Too low! Try again.\n");
//             continue;
//         }else if(bday > 28){
//             printf("%d\n", correct);
//             printf("Wrong! Too high! Try again.\n");
//             continue;
//         }
//     }

//     printf("\n");
//     return 0;
// }

// int main(){
//     printf("Outfit Picker.\nDescribe how you're feeling and I'll recommend an outfit colour for you\n");
//     printf("Options are:\n1 - Moody\n2 - Sad\n3 - Happy\n4 - Angry\n5 - Relaxed\n\n=> ");
//     int todays_mood;
//     scanf("%d", &todays_mood);

//     switch(todays_mood){
//         case 1:
//             printf("PURPLE is great for when you feel a bit moody.");
//             break;
//         case 2:
//             printf("Go with GRAY for a sad boy/girl aesthetic.");
//             break;
//         case 3:
//             printf("Sparkle in WHITE for happiness but keep it clean.");
//             break;
//         case 4:
//             printf("Looks like you're going RED with anger");
//             break;
//         case 5:
//             printf("Be on with nature and relax in GREEN");
//             break;
//         default:
//             printf("You can never go wrong with all BLACK");
//             break;
//     }

//     return 0;
// }


// C Program to check for prime number using Simple Approach 
#include <stdio.h> 
  
// Function to check prime number 
void checkPrime(int N) 
{ 
    // initially, flag is set to true or 1 
    int flag = 1; 
  
    // loop to iterate through 2 to N/2 
    for (int i = 2; i <= N / 2; i++) { 
  
        // if N is perfectly divisible by i 
        // flag is set to 0 i.e false 
        if (N % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
  
    if (flag) { 
        printf("The number %d is a Prime Number\n", N); 
    } 
    else { 
        printf("The number %d is not a Prime Number\n", N); 
    } 
  
    return; 
} 



int main(){
    // int num1 = 3, num2 = 5;
    int num1, num2;
    // int myNum, flag = 1;
    long largeNum = 1500000000;

    // printf("%d + %d = %d", num1, num2, num1 + num2);
    // printf("Enter the first number\n : ");
    // scanf("%d", &num1);

    // printf("Enter the second number\n : ");
    // scanf("%d", &num2);

    // printf("%d + %d = %d", num1, num2, num1 + num2);

    // printf("Enter a number to check if its a prime number : ");
    // scanf("%d", &myNum);

    printf("%ld", largeNum * 2);


    return 0;
}