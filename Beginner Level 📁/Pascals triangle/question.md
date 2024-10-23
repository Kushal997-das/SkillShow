Given a non-negative integer n, generate the first n Rows of Pascal's triangle.

Pascal’s triangle is a pattern in which a number in a row 'b', is the sum of the number exactly above it 'a', and the number to the left of a, 'c'.

Construction of pascals triangle :

1. The first row contains a single element: 1.
2. Each row starts and ends with 1.
3. Every interior element of the triangle is the sum of the two elements directly above it in the previous row.

Input:
One line of input, containing the non negative integer n.

Output:
Print the first n rows of Pascal’s triangle.

Example Input:
5

Example Output:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
