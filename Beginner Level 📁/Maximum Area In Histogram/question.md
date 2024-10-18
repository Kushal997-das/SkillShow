## Problem Statement
Write a Java program to find the maximum rectangular area in a histogram given its heights. The heights of the histogram are represented by an array of integers where the width of each bar is 1.

### Input
- An integer `n` representing the number of bars in the histogram (1 ≤ n ≤ 10^5).
- An array `heights[]` of size `n` where each element represents the height of a bar in the histogram.

### Output
- An integer representing the maximum area of the rectangle that can be formed in the histogram.

### Example

#### Example 1:
**Input**:  
```
n = 6
heights = [2, 1, 5, 6, 2, 3]
```

**Output**:  
`10`


**Explanation**:  
The largest rectangle can be formed using the heights 5 and 6, covering bars at indices 2 and 3. The area is `5 * 2 = 10`.

#### Example 2:
**Input**:  
```
n = 7
heights = [6, 2, 5, 4, 5, 1, 6]
```

**Output**:  
`12`


**Explanation**:  
The largest rectangle can be formed using the heights of bars from indices 1 to 4, with an area of `4 * 3 = 12`.

### Constraints
- `1 ≤ n ≤ 10^5`
- `1 ≤ heights[i] ≤ 10^4` for each valid `i`.
