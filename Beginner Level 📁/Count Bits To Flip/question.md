## Problem Statement
Write a Java program to find the number of bits that need to be flipped to convert one number `A` to another number `B`.

### Input
- Two integers `A` and `B` where `0 <= A, B <= 10^9`.

### Output
- An integer representing the number of bits that need to be flipped to convert `A` to `B`.

### Example

#### Example 1:
**Input**:  
`A = 29, B = 15`

**Output**:  
`2`

**Explanation**:  
Binary representation of `29` is `11101` and binary representation of `15` is `01111`.  
Two bits differ at positions 3 and 4 (0-based index).


#### Example 2:
**Input**:  
`A = 10, B = 20`

**Output**:  
`4`

**Explanation**:  
Binary representation of `10` is `1010` and binary representation of `20` is `10100`.  
Four bits need to be flipped.

### Constraints
- `0 <= A, B <= 10^9`
