## Bitmask
Click [here](../notes.md) to go back to the notes page.

## LeetCode Question
Medium 1386

## Description
A cinema has `n` rows of seats, numbered from 1 to `n` and there are ten seats in each row, labellwed from `1` to `10` as:
```
row 1: _ _ _    _ _ _ _    _ _ _
row 2: _ _ _    _ _ _ _    _ _ _
...
row n: _ _ _    _ _ _ _    _ _ _ 
```

Given the array `reservedSeats` containing the numbers of seats already reserved, for example, `reservedSeats[i] = [3, 8]` means the seat located in row 3 and labelled with 8 is already reserved.

Return the maximum number of four person groups you can assign on the cinma seats. A four-person group occupies four adjacent seats in one signle row. Seats across an asile (such as [3, 3] and [3, 4]) are not considered to be adjacent, but there is an exceptional case on which an asile split a four-person group, in that case, the aisle split a four-person group in the middle, which means to have two people on each side.

## Example
```
Input: n = 3, reserveredSeats = [[1, 2], [1, 3], [1, 8], [2, 6], [3, 1], [3, 10]]
Output: 4
Explanation:
row 1: _ X X    4 4 4 4    X _ _
row 2: _ 4 4    4 4 X _    _ _ _
row 3: _ 4 4    4 4 4 4    4 4 X

where 4 means the four-person group and X means the reserved seats.
```

## Key Idea
Notice each row has only 10 seats, then we can use a bitmask to represent whether the seat is reserved or not. Note each row may have at most 2 four-person group. Where we may take
- rightmost two seats from first column and leftmost two seats from second column
- four seats from second column
- rightmost two seats from second column and leftmost two seats from third column

Note first case and second case may occur together. Then we simply set bitmask for each row that the bit to be 1 if the seat is reserved at this row and column. Then we check if the 3 cases by checking those bits are 0.
 
## Complexity Analysis
- Time complexity: `O(n)` 
- Space complexity: `O(n)`

## Solution
- [C++](solution.cpp)
