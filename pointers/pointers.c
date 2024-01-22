#include <stdio.h>

// int main(){

//     int *num;
//     int n = 6;

//     num = &n;

//     printf("%i", *num);
// }

int main(){
    float x,y;
    float *z;
    y = 10.0;
    z = &y;
    x = *z;

    printf("%f %f\n", y, x);
    return 0;
}