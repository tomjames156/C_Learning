#include <stdio.h>

// Pseudocode
// from i to n -1 
// from j = i to n -1:
// if number[j] < smallest number
// swap smallest number with number at j

void swap(int arr[], int index1, int index2);

int main(){

    int numbers[] = {200, 2, 8, 7, 9, 6, 5, 0, 3};
    int n = sizeof(numbers) / sizeof(numbers[0]);
    int i = 0; 

    for(int i = 0; i < n; i++){
        int smallest = numbers[i];

        for(int j = i; j < n; j++){

            if(numbers[j] < smallest){
                smallest = numbers[j];
                swap(numbers, i , j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d, ", numbers[i]);
    }

    return 0;
}

void swap(int arr[], int index1, int index2){
    int num1 = arr[index1];
    int num2 = arr[index2];

    arr[index1] = num2;
    arr[index2] = num1;
}