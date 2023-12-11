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

int main(){
    int i, j, k;
    int arr[3][4][2] = {
        { {2, 4}, {7, 8}, {3, 4}, {5, 6} },
        { {7, 6}, {3, 4}, {5, 3}, {2, 3} },
        { {8, 9}, {7, 2}, {3, 4}, {5, 1}}
    };
    for(i = 0; i < 3; i++){
        for(j = 0; j < 4; j++){
            // printf("[ ");
            for(k = 0; k < 2; k++){
                printf("%d ", arr[i][j][k]);
            }
            // printf("]");
            printf("\n");
        }
        printf("\n");
    }
}