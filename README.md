# geekforgeeks_problem_practice
Holiday Journal for OOP&DS practice - In this journal problems from geeks for geeks website have explained. 

' ' '
## 1__Find the largest three elements in an array
### Algorithm 
The given code implements a C program that finds and prints the three largest elements in an array. Here's an explanation of the algorithm in simple words:

1. Check Array Size:
   - The function `print3largest` takes an array `arr` and its size `size` as parameters.
   - It first checks if the array size is less than 3. If it is, it prints an error message and returns because finding the three largest elements in an array requires at least three elements.

2. Initialize Variables:
   - Three variables (`first`, `second`, and `third`) are initialized with the first three elements of the array.

3. Iterate Through Array:
   - A loop starts from the index 3 and goes up to the end of the array (`size - 1`).
   - For each element at index `i`:
     - If the element exceeds the current largest (`first`), it updates all three variables accordingly.
     - If it's not greater than the first but greater than the second, it updates the second and third variables.
     - If it's not greater than the first or second but greater than the third, it updates only the third variable.

4. Print Result:
   - After the loop, the function prints the three largest elements (`first`, `second`, and `third`).

5. Main Function:
   - In the `main` function, an example array `arr` is defined.
   - The size of the array (`n`) is calculated using the `sizeof` operator.
   - The `print3largest` function is then called with the array and its size.

6. Example Array:
   - The given example array is {12, 13, 1, 10, 34, 1}.
   - The three largest elements in this array are found and printed by the `print3largest` function.

In simple terms, the algorithm finds the three largest numbers in an array by iterating through the array and updating the largest, second largest, and third largest numbers as it goes. Finally, it prints these three most significant numbers.
![Screenshot (254)](https://github.com/ankita430/geekforgeeks_problem_practice/assets/141404641/dd9c263f-134b-4ea4-8f66-37bb703bbc0d)

' ' '
## 2_Find Second largest element in an array
### Algorithm
Algorithm to Find Index of Second Largest Element:

1. Check Array Size:
   - If the size of the array (`n`) is less than 2, print a message saying "Array should have at least two elements" and return -1.

2. Initialize Variables:
   - Initialize two variables, `a` and `b`.
     - `a` represents the index of the largest element (initially set to 0).
     - `b` represents the index of the second-largest element (initially set to -1).

3. Iterate Through the Array:
   - Start a loop from index 1 to `n-1` to traverse the array.
   
4. Compare with Largest Element (`arr[a]`):
   - If the element at the current index (`arr[i]`) is greater than the element at the largest element's index (`arr[a]`):
     - Update `b` to the current index (`b = a`).
     - Update `a` to the current index (`a = i`).

5. Check for Different Element:
   - If the element at the current index is not equal to the element at the largest element's index:
     - Check if `b` is -1 or the element at the current index is greater than the element at the second-largest element's index (`arr[b]`).
     - If true, update `b` to the current index (`b = i`).

6. Return Result:
   - After the loop, return the value of `b`. This represents the index of the second-largest element in the array.

7. Check for Non-Existence:
   - In the `main` function, check if the result is -1. If true, print "Second largest element doesn't exist."
   - If false, print "Index of the second largest element: [result]."

This algorithm aims to find the index of the second-largest element in the given array. It uses two variables to keep track of the largest and second-largest elements while iterating through the array.
![Screenshot (255)](https://github.com/ankita430/geekforgeeks_problem_practice/assets/141404641/3e500117-a234-4b9d-8709-46c5af249536)

' ' ' 

## 3_Move all zeroes to end of array
### Algorithm
Algorithm: moveZerosToEnd

Input:
- arr: an array of integers
- n: the size of the array

Output:
- None (the function modifies the input array in-place)

Steps:
1. Initialize a variable count to 0.
2. Iterate through the array using a loop with the index i from 0 to n-1.
   a. If arr[i] is not equal to 0, assign arr[i] to arr[count] and increment count.
3. After the loop, run another loop while count is less than n.
   a. Assign 0 to arr[count] and increment count.
4. The function has now moved all non-zero elements to the beginning of the array and filled the remaining positions with zeros.

Example:
Consider the input array arr[] = {1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9}.
After calling moveZerosToEnd(arr, n), the array will be modified to {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0}.
![Screenshot (256)](https://github.com/ankita430/geeksforgeeks_problem_practice/assets/141404641/eb9e7904-e658-4439-ae2b-ca7fd404a8b5)

' ' '
