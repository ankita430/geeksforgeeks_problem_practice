#include <stdio.h>
void moveZerosToEnd(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count++] = arr[i];
        }
    }
    while (count < n)
    {
        arr [count++] = 0;
    }
}
   int main()
   {
       int arr[] = {1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9};
       int n = sizeof(arr) / sizeof(arr[0]);
       
       moveZerosToEnd(arr, n);
       printf("%s\n", "Array after moving all zeros to the end of array:");
       for(int i = 0; i < n; i++)
       {
           printf("%d ", arr[i]);
       }
       return 0;
   }