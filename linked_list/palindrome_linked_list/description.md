## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 234

## Description
Given the `head` of a singly linked list, return `true` if it is a palindrome.

## Example:
```
Input: head = 1 -> 2 -> 2 -> 1
Output: true

Input: head = 1 -> 2
Output: false
```

## Key Idea
The key idea is that if we reverse the half of the list, it is equal to the another half, then it is a palindrome. Thus, we can try to reverse the first half of the linkedlist and then traverse the first half and second half and compare their value. To acheive it, we will first traverse the linkedlist to get its length, then we reverse the first half and traverse both first half and second half.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
