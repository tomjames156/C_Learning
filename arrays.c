#include <stdio.h>

void swap(int arr[], int index);

void sort(int arr[], int length);

void swap(int arr[], int index){
    int val1 = arr[index];
    int val2 = arr[index + 1];
    arr[index] = val2;
    arr[index + 1] = val1;
}

void sort(int arr[], int length){
    for(int k = 1; k <= length - 1; k++){
        int flag = 0;
        
        for(int j = 0; j <= length - k - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr, j);
                flag = 1;
            }
        }

        if(flag == 0){
            break;
        }
    }
}

// int main(){
//     // char initials[4];
//     char initials[] = {'A', 'T', 'E', 'A'};
//     int i;

//     initials[0] = 'B';
//     // initials[1] = 'T';
//     // initials[2] = 'E';
//     // initials[3] = 'A';

//     printf("I am Toms the Optimist and my initials are; ");

//     for(i = 0; i < 4; i++){
//         printf("%c", initials[i]);
//     }

//     printf("\n");
//     return 0;
// }


// int main(){
//     char deps[2][3] = {{'S', 'C', 'I'}, {'C', 'M', 'E'}};
//     char cyb[] = "Cyber";
//     printf("%s\n", cyb);
//     printf("%c", deps[0][1]);
//     printf("\n");
//     return 0;
// }

int main(){
    int numbers[] = {2, 7, 9, 3, 1, 5};
    int len = (int) sizeof(numbers) / sizeof(numbers[0]);

    sort(numbers, len);

    for(int i = 0; i < len; i++){
        printf("%d,", numbers[i]);
    }
}