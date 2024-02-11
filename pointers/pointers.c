#include <stdio.h>

// int main(){

//     int *num;
//     int n = 6;

//     num = &n;

//     printf("%i", *num);
// }

// int main(){
//     float x,y;
//     float *z;
//     y = 10.0;
//     z = &y;
//     x = *z;

//     printf("%f %f\n", y, x);

//     *z = 9;
//     printf("%f %f\n", y, x);
    
//     return 0;
// }


// int main(){

//     int* a, b = 580;
//     a = &b;


//     // printf("%p", a);

//     printf("Enter your age: ");
//     scanf("%d", a); // Here the pointer to the variable b is used which actually stores the value in b
//     *a = 50;
//     printf("You are going to be %d years old in 10 years\n", *a + 10);
//     printf("This is the memory address holding your age: %p", a);

//     return 0;

// }

// int main(){

//     char *letterPointer, letter = 'T'; 
//     letterPointer = &letter;
//     printf("%d", &letter);

//     return 0;
// }

int main(){
    int *z, n = 6, m;

    printf("\a");

    z = &n;
    m = *z;
    printf("m: %d\n", z);
    printf("n: %d\n", n);
    printf("z: %d\n", z);
    *z = 9;

    printf("m: %d\n", z);
    printf("n: %d\n", n);
    printf("z: %d", z);
    return 0;
}