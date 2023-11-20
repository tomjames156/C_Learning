# include <stdio.h>

// int main(){
//     int num;
//     printf("Please enter a number\n=> ");
//     scanf("%d", &num);
//     printf("\nYou entered the number: %d", num);

//     return 0;
// }

// int main(){
//     float breadth;
//     float height;

//     printf("Calculate the area of a triangle by giving its dimensions");

//     printf("\nEnter the breadth\n=> ");
//     scanf("%f", &breadth);

//     printf("\nEnter the height\n=> ");
//     scanf("%f", &height);

//     float area = breadth * height * 0.5;

//     printf("\nThe area of the triangle is %.2f sq units", area);
//     return 0;
// }

int main(){
    
    printf("A program that calculates the area of a circle");

    float radius;

    printf("\nEnter the radius of the circle\n=> ");
    scanf("%f", &radius);

    float area = (float) 22 / 7 * radius * radius;

    printf("\nThe area of the circle is %.2f", area);

    return 0;
}

// int main(){
//     float tempInCelcius;
//     float tempinFarenheit;
//     printf("A program that converts temperature in Celsius to Farenheit");

//     printf("\nEnter the temperature in Celsius\n=> ");
//     scanf("%f", &tempInCelcius);

//     tempinFarenheit = (tempInCelcius * 9/5) + 32;

//     printf("The temperature in farenheit is: %.2f", tempinFarenheit);

//     return 0;
// }