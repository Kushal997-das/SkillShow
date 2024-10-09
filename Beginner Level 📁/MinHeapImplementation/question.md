# Implement a Min-Heap in C

## Problem Description
A Min-Heap is a complete binary tree where each node is less than or equal to its child nodes. The root of the Min-Heap is the smallest element. Your task is to implement a Min-Heap in C with the following operations:
1. **Insert**: Insert an element into the Min-Heap.
2. **Extract Min**: Remove and return the smallest element from the Min-Heap.
3. **Display**: Print all elements of the Min-Heap in level order.
4. **Delete**: Delete a specific element from the Min-Heap.

## Requirements
1. Use an array to represent the Min-Heap.
2. Write functions to implement the heap operations.
3. Handle all corner cases such as underflow or overflow of the heap.

## Input Format
- The program should accept commands in the format:
  - `1 x` - Insert element `x` into the heap.
  - `2` - Extract the minimum element from the heap.
  - `3` - Display all elements of the heap.
  - `4 x` - Delete element `x` from the heap.
  - `0` - Exit the program.

## Output Format
- For each `2` operation, output the extracted minimum element.
- For each `3` operation, output all elements of the heap in level order.

## Constraints
- The maximum number of elements in the heap is `1000`.
- The elements in the heap are integers in the range `-10000` to `10000`.

## Example
Input: 1 5 1 3 1 8 3 2 3 4 3 3 0

Output: Heap elements: 3 5 8 Extracted min: 3 Heap elements: 5 8 Heap elements: 8

##Explanation:

Inserted 5, 3, and 8 into the heap.
Displayed the heap: 3 5 8 (level order).
Extracted minimum element, which is 3.
Displayed the heap again: 5 8.
Deleted element 3 from the heap.
Displayed the heap again: 8.


## Additional Information
A Min-Heap is useful in implementing priority queues, where the element with the highest priority is removed first. It is also used in algorithms like Dijkstra's and Prim's for finding the shortest path and minimum spanning tree, respectively.
