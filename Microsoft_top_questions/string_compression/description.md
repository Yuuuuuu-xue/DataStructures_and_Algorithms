## LeetCode Question
Medium 443

## Description
Given an array of characters `chars`, compress it using the following algorithm. Begin with an empty string `s`, for each group of consecutive repeating characters in `chars`:
- If the group's length is `1`, append the character to `s`.
- Otherwise, append the character followed by the group's length.

The compressed strign `s` should not be returned separately, but instead, be stored in the input character array `chars`. Note that group lengths that are `10` or longer will split into multiple characters in `chars`.

After you are done modiying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.

## Example
```
Input: chars = ['a', 'a', 'b', 'b', 'c', 'c', 'c']
Output: return 6, and the first 6 characters of the input array should be: ['a', '2', 'b', '2', 'c', '3']

Input: chars = ['a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b']
Output: return 4, and the first 4 characters of the input array should be: ['a', 'b', '1', '2']
```

## Key Idea
Let `left` and `right` be two pointers where `chars[left:right+1]` are all the same characters, we will keep increment `right` until we reach to the maximum window, then we can compress them. Then we know the number of repeating characters and we need to modify the input array. 

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)