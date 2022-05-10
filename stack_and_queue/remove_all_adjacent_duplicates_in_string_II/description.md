## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Description
You are given a string ```s``` and an integer ```k```, a ```k``` duplicate removal consists of choosing ```k``` adjacent and equal letters from ```s``` and removing them, causing the left and the right side of the deleted substring to concatenate togheter.

We repeatedly make ```k``` duplicate removals on ```s``` until we no longer can.

Return the final string after all such duplicate removals have been made. It is guranteed that the answer is unique.

## Example
```
Input: s = "abcd", k = 2
Output: "abcd"
Explanation: There's nothing yo delete.

Input: s = "deeedbbcccbdaa", k = 3
Output: "aa"
Explanation:
  - First delete "eee" and "ccc" to get "ddbbbdaa"
  - Then delete "bbb" to get "dddaa"
  - Finally delete "ddd" and get "aa"
```

## Key Idea
We will use a stack to solve this problem. The stack will contains a pair (character, integer) where the first element is the character in s and second element is current adjacent characters. If current character is same as the character in the top of stack, then we increment the integer count. And we check if the counts is >= k or not. If so, pop it from the stack (if it is == k otherwise update the counter to be n - k). If the item is not same, then we push (current character, 1) to the stack. At the end, loop over the stack and build the target string. 

## Complexity Analaysis
- The time complexity is O(n)
- The space complexity is O(n)

## Solution
- [Java Solution](remove_all_adjacent_duplicates_in_string_II.java)