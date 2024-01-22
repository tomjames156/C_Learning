#include <stdio.h>

// int main(){
//     int i;
//     int n;
//     int numbers[5];
//     printf("Enter 5 numbers: ");
//     for(i = 0; i < 5; i++){
//         scanf("%d", &numbers[i]);
//     }

//     printf("\nThe numbers are: ");
//     for(n = 0; n < 5; n++){
//         printf("%d ", numbers[n]);
//     }
//     return 0;
// }

// int main(){
//     int i, j, k;
//     int arr[3][4][2] = {
//         { {2, 4}, {7, 8}, {3, 4}, {5, 6} },
//         { {7, 6}, {3, 4}, {5, 3}, {2, 3} },
//         { {8, 9}, {7, 2}, {3, 4}, {5, 1}}
//     };
//     for(i = 0; i < 3; i++){
//         for(j = 0; j < 4; j++){
//             for(k = 0; k < 2; k++){
//                 printf("%d ", arr[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }

int main(){
    int arr[10];
    int i, total;
    float average;
    
    printf("Enter 10 numbers to get their average;");
    printf("\n");

    for(i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++){
        total += arr[i];
    }

    average = (float) total / 10;
    printf("\nAverage: %.2f", average);
    return 0;
}

// input age and student id