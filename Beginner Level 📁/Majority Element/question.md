## Problem Statement
Write a Java program to find the majority element in a given array of integers. The majority element is the element that appears more than `n / 2` times, where `n` is the size of the array.

### Input
- An integer `n` representing the size of the array (1 ≤ n ≤ 10^5).
- An array of `n` integers where each element is within the range of a 32-bit signed integer.

### Output
- The majority element in the array. It is guaranteed that a majority element always exists in the array.

### Example

#### Example 1:
**Input**:  
```
n = 5
arr = [3, 3, 4, 2, 3]
```

**Output**:  
`3`


**Explanation**:  
The element `3` appears 3 times in an array of size 5, which is more than `5 / 2 = 2.5` times.

#### Example 2:
**Input**:  
```
n = 7
arr = [2, 2, 1, 1, 2, 2, 2]
```


**Output**:  
`2`


**Explanation**:  
The element `2` appears 4 times in an array of size 7, which is more than `7 / 2 = 3.5` times.

### Constraints
- `1 ≤ n ≤ 10^5`
- The array contains integers in the range of a 32-bit signed integer.