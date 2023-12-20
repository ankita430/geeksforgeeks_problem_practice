#include <stdio.h>

    int findSecondLargest(int arr[], int n) {
     
    if (n < 2) {
        printf("Array should have at least two elements. \n");
        return -1;
    }
    
    int a = 0;
    int b = -1;
    
    for (int i = 1; i < n; ++i) {
        
        if (arr[i] > arr[a]) {
            
            b = a;
            a = i;
            
        } else if (arr[i] != arr[a]) {
            
            if (b == -1 || arr[i] > arr[b]) {
                
                b = i;
            }
        }
    }
    
    return b;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
   
    int result = findSecondLargest(arr, n);
   
    if (result != -1) {
        printf("Index of the second largest element: %d\n", result);
    } else {
        printf("Second largest element doesn't exist. \n");
    }

    return 0;
}
