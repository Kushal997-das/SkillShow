# Problem Statement

Given a singly linked list, write a function to find the nth node from the end of the list. The function should return the data of the nth node. If `n` is greater than the length of the list, return `-1`.

## Input

- The linked list is constructed from `Node` instances, each containing:
  - `data` (integer): The value of the node.
  - `next` (Node): The next node in the list or `null` if it’s the last node.
- `n` (integer): The position from the end of the list to find.

## Output

- An integer representing the data of the nth node from the end.
- Return `-1` if `n` is larger than the length of the list.

## Constraints

1. `1 <= n <= 10^5`
2. The linked list will contain only non-negative integers.
3. The linked list length will be between `1` and `10^5`.

## Example

### Example 1

**Input:**

- Linked List: `0 -> 1 -> 2 -> 3 -> 4 -> 5 -> Null`
- `n = 2`

**Output:** `4`

**Explanation:** The second node from the end of the list has the value `4`.

### Example 2

**Input:**

- Linked List: `1 -> 2 -> 3 -> Null`
- `n = 4`

**Output:** `-1`

**Explanation:** `n` is greater than the list length, so the function returns `-1`.

### Time Complexity

- **O(L)** where `L` is the length of the linked list. The function traverses the list twice, once to calculate the length and again to locate the nth node from the end.

### Space Complexity

- **O(1)**, as no extra space is used apart from a few pointers for traversal.
