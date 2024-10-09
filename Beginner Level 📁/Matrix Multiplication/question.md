# Matrix Multiplication Programming Challenge

## Problem Statement

Write a program that performs matrix multiplication. Your program should be able to multiply two matrices of compatible dimensions.

## Requirements

1. Create a function called `matrix_multiply(matrix1, matrix2)` that takes two matrices as input and returns their product.
2. The function should first check if the matrices can be multiplied (i.e., the number of columns in the first matrix should equal the number of rows in the second matrix).
3. If the matrices cannot be multiplied, the function should return an appropriate error message.
4. The function should return the resulting matrix if the multiplication is successful.
5. Implement input validation to ensure that the input matrices are valid (i.e., each row has the same number of elements).

## Input Format

- The matrices will be represented as lists of lists, where each inner list represents a row of the matrix.
- Example: `[[1, 2], [3, 4]]` represents a 2x2 matrix.

## Output Format

- The result should be a new matrix (list of lists) containing the product of the input matrices.

## Example

```python
# Example input
matrix1 = [[1, 2, 3],
           [4, 5, 6]]

matrix2 = [[7, 8],
           [9, 10],
           [11, 12]]

# Expected output
result = [[58, 64],
          [139, 154]]
```

## Bonus Challenges

1. Implement error handling for invalid input types (e.g., non-numeric elements in the matrices).
2. Optimize your solution for large matrices.
3. Add functionality to handle matrix multiplication with more than two matrices.
