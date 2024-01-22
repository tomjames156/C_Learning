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

int main(){

    struct customer{
        char firm[20];
        char contact[20];
    };

    struct sale{
        struct customer buyer1;
        char item[20];
        int amt;
    } mysale = {{"XYZ Company", "Adams"}, "toolskit", 20};

    printf("%s", mysale.buyer1.firm);
    return 0;
}