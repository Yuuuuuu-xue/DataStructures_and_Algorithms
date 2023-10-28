## LeetCode Problem
Easy 190

## Description
Reverse bits (the order) of a given 32 bits unsigned integer.

## Example
```
Input: n = 00000010100101000001111010011100
Output: 964176192 (00111001011110000010100101000000)
Explanation: THe input binary string 00000010100101000001111010011100 represents the unsigned integer 43261596, so return 964176192 which its binary represention is 00111001011110000010100101000000

Input: n = 11111111111111111111111111111101
Output: 3221225471 (10111111111111111111111111111111)
```

## Key Idea
Simply traverse the bits from back to front and then push the bits to the output number.

We can get the bit from back by `1 & n`, then to update n: `n = n >> 1`.

Now to push the front: `x = (x << 1) | (1 & n)`

## Complexity Analysis
- Runtime Complexity:
  - O(1)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)