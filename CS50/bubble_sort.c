#include <stdio.h>

// Pseudocode

// from 0 to n - 1
// from 0 to n-2
// if numbers[i] < numbers[i+1]:
//  swap their positions

void swap(int arr[], int index1);

int main(){
    int numbers[] = {2, 8, 7, 9, 5, 0, 3};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int pass = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n - i - 1); j++){
            if(numbers[j] > numbers[j + 1]){
                swap(numbers, j);
                pass = 1;
            }
        }
        if(pass == 0){
            break;
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d, ", numbers[i]);
    }

    return 0;
}

void swap(int arr[], int index1){
    int num1 = arr[index1];
    int num2 = arr[index1 + 1];
    arr[index1] = num2;
    arr[index1 + 1] = num1;
}