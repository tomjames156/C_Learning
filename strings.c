#include <stdio.h>
#include <string.h>

// String Introduction

// int main(){
//   char my_name[4] = "Tomi"; // this actually takes 6 spaces, 5 for the characters and 1 for the null terminator
//   char hobby[] = "Programming";
//   char user[8];
//   int userAge;

//   char my_chars[4] = {'T', 'o', 'm', 'i'}; // an array of individual chars is not a string so the assignment operator works 

//   // my_chars[2] = 'n';

//   printf("My name is %s and I love %s\n", my_name, hobby);
//   printf("My name contains 1 %c\n", my_chars[2]);

//   printf("Hey there!, What's your name?\n=> ");
//   scanf("%s", user);
//   printf("\nHi there %s. How is your day going?\n", user);

//   printf("How old are you %s\n=> ", user);
//   scanf("%i", &userAge);

//   if(userAge >= 18){
//     printf("\nWow, you're an adult. That's hard work");
//   }else{
//     printf("\nWow, you're still a child. Enjoy your childhood");
//   }
  

//   return 0;
// }

// gets(), fgets() and puts()

// int main(){
//   char sibling[7];
//   printf("What is your brother's name? : ");
//   // gets(sibling);
//   fgets(sibling, 7, stdin);
//   printf("%s is such a cool name", sibling);

//   return 0;
// }

// String passed to a function
// void welcomeUser(char fname[], char lname[]);

// void welcomeUser(char fname[], char lname[]){
//   if(strlen(fname) == 7 && fname[0] == 'T' && fname[6] == 'n'){
//     printf("Welcome back to the lab Dr %s Akinwande", fname);
//   }else{
//     printf("Access Denied");
//   }
// }

// int main(){
//   char user[10];
//   char userLname[10];
//   printf("Who are you please?\n=> ");
//   scanf("%s", user);
//   scanf("%s", userLname);
//   printf("%zu", strlen(user)); // checks string length
//   welcomeUser(user, userLname);

//   return 0;
// }


// int main(){
//   char intro[100] = "My name is Dr Akinwande Tomisin. ", more[50] = "I like innovation";
//   char myIntro[100];
//   char userIntro[70];
//   char moreOfUser[50];
//   strcat(intro, more);

//   strcpy(myIntro, intro);

//   printf("%s and I'm an investor\n", myIntro);

//   puts(intro);
//   // puts(more);

//   printf("What about you? Who are you and what do you like? : ");
//   fgets(userIntro, 70, stdin);
//   fgets(moreOfUser, 50, stdin);

//   strcat(userIntro, moreOfUser);
//   puts(userIntro);
//   puts(moreOfUser);

//   return 0;
// }

// void confirmPassword(char pass[]);

// void confirmPassword(char pass[]){
//   char myPass[15] = "password123";
  
//   if((strcmp(pass, myPass)) == 0){
//     printf("ACCESS GRANTED.\nWelcome back Dr. Akinwande");
//   }else{
//     printf("ACCESS DENIED. You have 2 more tries");
//   }
// }

// int main(){
//   char pass[15];
//   printf("Enter your password : ");
//   scanf("%s", pass);
//   confirmPassword(pass);

//   return 0;
// }

int main(){
  char user[4] = "Tomi";
  char reqUser[5];

  printf("Please confirm your name to access my app\n=> ");
  fgets(reqUser, 5, stdin);
  // scanf("%s", reqUser);

  int result = strcmp(user, reqUser);
  printf("Result: %i", result);

  if(result == 0){
    printf("\nWelcome back Dr Tomisin");
  }else{
    printf("\nNEW USER!!!\nWelcome to EdPower %s", reqUser);
  }

  return 0;
}