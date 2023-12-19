# geekforgeeks_problem_practice
Holiday Journal for OOP&amp;DS practice - In this journal problems from geeks for geeks website have explained. 

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
