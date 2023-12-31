#include <stdio.h>

void print3largest(int arr[], int size) {
    

    if (size < 3) {
        printf("Error: Please ensure the array has a minimum size of 3 elements.\n");
        return;
    }

    int first = arr[0], second = arr[1], third = arr[2];

    for (int i = 3; i < size ; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    printf("Three largest elements are %d %d %d\n", first, second, third);
}

int main() {
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    print3largest(arr, n);

    return 0;
}


