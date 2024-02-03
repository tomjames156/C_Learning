// Structure collection of variables of diff types

#include <stdio.h>

// int main(){
//     struct book{
//         char name;
//         float price;
//         int pages;
//     };
//     // struct book b1, b2, b3;
//     // printf("Enter name, price & no of pages for 3 books\n=> ");

//     // scanf(" %c %f %d", &b1.name, &b1.price, &b1.pages);
//     // // printf("\nAddress of name = %u", &b1.name);
//     // printf("\n");
//     // scanf(" %c %f %d", &b2.name, &b2.price, &b2.pages);
//     // printf("\n");
//     // scanf(" %c %f %d", &b3.name, &b3.price, &b3.pages);

//     // printf("\nAnd this is what you entered");
//     // printf("\n%c %f %d", b1.name, b1.price, b1.pages);
//     // printf("\n%c %f %d", b2.name, b2.price, b2.pages);
//     // printf("\n%c %f %d", b3.name, b3.price, b3.pages);

//     struct book b[5];
//     for(int i = 0; i < 5; i++){
//         printf("\nEnter name, price and pages\n");
//         scanf(" %c %f %d", &b[i].name, &b[i].price, &b[i].pages);
//     }

//     for(int i = 0; i < 5; i++){
//         printf("\n%c %f %d", b[i].name, b[i].price, b[i].pages);
//     }

//     // struct coordinates{
//     //     int x;
//     //     int y;
//     // }first, second;

//     // first.x = 50;
//     // first.y = 100;

//     // second.x = 100;
//     // second.y = 130;

//     // printf("(%d,%d)", first.x, first.y);
//     // printf("(%d,%d)", second.x, second.y);

//     return 0;
// }

// int main(){

//     struct customer{
//         char firm[20];
//         char contact[20];
//     };

//     struct sale{
//         struct customer buyer1;
//         char item[20];
//         int amt;
//     } mysale = {{"XYZ Company", "Adams"}, "toolskit", 20};

//     printf("%s", mysale.buyer1.firm);
//     return 0;
// }

// int main(){

//     struct book{
//         char name;
//         int published;
//         int pages;
//         float price;
//     };

//     struct motor{
//         char model[50];
//         float volts;
//         float amps;
//         int phases;
//         float rpm;
//     };

//     struct{
//         float x;
//         float y;
//     } nile;
    
//     // struct book b1, b2, b3;

//     // printf("Enter the following information for 3 books. Name, Published Date, Number of Pages and Price");
//     // printf("\nBook 1 : ");
//     // scanf(" %c%i%i%f", &b1.name, &b1.published, &b1.pages, &b1.price);
//     // printf("\nBook 2 : ");
//     // scanf(" %c%i%i%f", &b2.name, &b2.published, &b2.pages, &b2.price);
//     // printf("\nBook 3 : ");
//     // scanf(" %c%i%i%f", &b3.name, &b3.published, &b3.pages, &b3.price);

//     // printf("\nName: %c, Published: %i, Number of Pages: %i, Price: $%.2f", b1.name, b1.published, b1.pages, b1.price);
//     // printf("\nName: %c, Published: %i, Number of Pages: %i, Price: $%.2f", b2.name, b2.published, b2.pages, b2.price);
//     // printf("\nName: %c, Published: %i, Number of Pages: %i, Price: $%.2f", b3.name, b3.published, b3.pages, b3.price);

//     // struct motor motor1;

//     // printf("Please give the specifications of the motor in this order; \nModel\nVolts\nAmps\nPhases\nRotations Per Minute (rpm)\n");
//     // // fgets(motor1.model, 50, stdin);
//     // scanf("%s%f%f%i%f", motor1.model, &motor1.volts, &motor1.amps, &motor1.phases, &motor1.rpm);
//     // printf("You have a %s motor with %.2f volts, %.2f amps, %i phases, and %.2f rotations per minute", motor1.model, motor1.volts, motor1.amps, motor1.phases, motor1.rpm);

//     struct motor m1 = {"Mac m1", 20.5689, 25.668, 3, 200};
//     printf("You have a %s motor with %.2f volts, %.2f amps, %i phases, and %.2f rotations per minute", m1.model, m1.volts, m1.amps, m1.phases, m1.rpm);

//     // printf("What are nile university's coordinates on the map? Enter them in the order\nX:\nY:\n");
//     // scanf("%f%f", &nile.x, &nile.y);

//     // printf("Nile university is located at x: %.2f and y: %.2f on the map", nile.x, nile.y);

//     return 0;
// }


int main(){
    char fullName[30];

    struct hostel{
        char hostelName[30];
        int roomNumber;
    };

    struct friend{
        char name[50];
        struct hostel hostel;
        int age;
        char department[30];
        char city[10];
    } friends[3];

    // struct friend friends[5];

    // for(int i = 0; i < 3; i++){
    //     printf("Enter info about your friend in the order;\nName:\nAge:\nDepartment:\nCity:\n");
    //     scanf(" %s%i%s%s", friends[i].name, &friends[i].age, friends[i].department, friends[i].city);
    // }

    // printf("Enter your name below: ");
    // // scanf("%s", fullName);
    // // gets(fullName);
    // fgets(fullName, 30, stdin);
    // printf("\nHi I'm %s and these are my friends", fullName);

    // for(int i = 0; i < 3; i++){
    //     printf("\n%s is %i years old from %s and studies %s", friends[i].name, friends[i].age, friends[i].city, friends[i].department);
    // }

    struct friend chuks = {"Chukwudubem", {"Blue Nile", 312}, 19, "Software Engineering", "P.H"};
    struct friend reyd = {"Fareyd", {"Blue Nile", 224}, 19, "Computer Science", "Abuja"};

    printf("\nMy friend %s is %i years old from %s and studies %s. You can find him in %s Room %i", chuks.name, chuks.age, chuks.city, chuks.department, chuks.hostel.hostelName, chuks.hostel.roomNumber);
    printf("\nMy friend %s is %i years old from %s and studies %s. You can find him in %s Room %i", reyd.name, reyd.age, reyd.city, reyd.department, reyd.hostel.hostelName, reyd.hostel.roomNumber);

    return 0;
}