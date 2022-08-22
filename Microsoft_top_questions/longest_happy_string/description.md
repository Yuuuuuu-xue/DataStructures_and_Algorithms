## LeetCode Question
Medium 1405

## Description
A string `s` is called happy if it satisfies the following conditions:
- `s` only contains the letters `'a'`, `'b'`, `'c'`
- `s` does not contain any of `"aaa"`, `"bbb"`, or `"ccc"` as a substring
- `s` contains at most `a` occurrences of the letter `'a'`
- `s` contains at most `b` occurrences of the letter `'b'`
- `s` contains at most `c` occurrences of the letter `'c'`

Given three integers `a`, `b`, and `c`, return the longest possible happy string. If there are multiple longest happy strings, return any of them. If there is no such string, return the empty string "".

## Example
```
Input: a = 1, b = 1, c = 7
Output: "ccaccbcc"
Explanation: "ccbccacc" would also be a correct answer.

Input: a = 7, b = 1, c = 0
Output: "aabaa"
Explanation: "aabaa"
```

## Key Idea
We will solve this question via Greedy Algorithm. We will choose the character with the most occurrence and push it to the `s` without any violation (i.e. 3 or more repeating characters in a row). Then we need to try another character. Thus, let `pq` be a priority queue of pair `{occurrence, character}`. Then for each iteration, we will build the output string `o` and we check
- If `o.size() < 2`, then push the top pair's character and decrement its occurrence by 1 (push it back it occurrence > 0)
- If `o.size() > 2` and `o[i - 1] == o[i - 2] == character`, then we try the next character
  - if `pq` is empty, then no letters to try and return `o`
  - if `pq` is not empty, try the next character and update the occurrence
At the end return `o`.

## Complexity Analysis
- Time complexity: O(n lg 3)
- Space complexity: O(n)
 
## Solution
- [C++](solution.cpp)