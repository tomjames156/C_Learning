#include <stdio.h>

// int main(){
//     int num;
//     int sum = 0;
//     float average;
//     int count = 10;
//     printf("Enter ten numbers to get their average");

//     while(count > 0){
//         count--;
//         printf("\n=> ");
//         scanf("%d", &num);
//         sum += num;
//     }

//     average = (float) sum / 10;

//     printf("Sum = %d\nAverage : %.2f", sum, average);
//     return 0;

// }

// int main(){

//     int i;

//     for(i = 10; i > 0; i-=2){
//         printf("%d ", i);
//     }
//     return 0;
// }

// int main(){
    
//     int i;

//     for(i = 5; i <= 50; i+=3){
//         printf("%d ", i);
//     }

//     return 0;
// }

// int main(){

//     int i;

//     for(i = 10; i >= 0; i-=1){
//         if(i == 5){
//             continue;
//         }
//         printf("%d ", i);
//     }

//     return 0;
// }

int main(){

    int x;
    int y;
    printf("Multiplication table from 1 - 5");

    for(x = 1; x <= 5; x++){
        printf("\n\n");
        for(y = 1; y <= 12; y++){
            int product = x * y;
            printf("\n%d X %d = %d", x, y, product);
        }
    }
}