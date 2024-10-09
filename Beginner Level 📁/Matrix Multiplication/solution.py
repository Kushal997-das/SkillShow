import sys


def matrix_multiply(matrix1, matrix2):
    """function to multiply two matrices (having same number of rows and columns)"""
    a = len(matrix1)
    b = len(matrix1[0]) # b is the number of columns in matrix1 and rows in matrix2
    c = len(matrix2[0])
    d = len(matrix2)

    if b!=d:
        print("The matrices cannot be be multiplied")
        sys.exit(0) #stop the execution of the code

    #initializing an empty matrix of size a x c
    ans = [[0 for i in range(c)] for j in range(a)]
    for i in range(a):
        for j in range(c):
            for k in range(b):
                ans[i][j] += matrix1[i][k] * matrix2[k][j]
    return ans


def print_matrix(matrix):
    """function to print 2D array in matrix format"""
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            print(matrix[i][j], end=" ")
        print()


def check_matrix(matrix):
    """function to check if the matrix is valid or not"""
    n = len(matrix[0])
    for i in range(1, len(matrix)):
        if len(matrix[i]) != n:
            print("The matrices are not valid")
            sys.exit(0)       



""" Matrices in programming are represented as a 2D array/list, with 
    each sublist element of bigger list having same number of elements """

# matrix of size 2x3
matrix1 = [[1, 2, 3],
           [4, 5, 6]]          
# matrix of size 3x2
matrix2 = [[7, 8], 
           [9, 10], 
           [11, 12],]

check_matrix(matrix1) 
check_matrix(matrix2)
"""
ans = 66 96 
      80 108 
"""
# the answer matrix will be the matrix obtained by multiplying matrix1 and matrix2
ans = matrix_multiply(matrix1, matrix2) 

print_matrix(ans) # function will print answer matrix, which in this case will be 2x2