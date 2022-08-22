## LeetCode Question
Medium 1647

## Description
A string `s` is called good if there are no two different characters in `s` that have the same frequency.

Given a string `s`, return the minimum number of characters you need to delete to make `s` good.


## Example
```
Input: s = "aab"
Output: 0
Explanation: s is already good

Input: s = "aaabbbcc"
Output: 2
Explanation: You can delete two 'b' resulting in the good string "aaabcc" or we can delete one 'b' and one 'c' resuling in the good string "aaabbc"
```

## Key Idea
We will first build the map `freq` that maps the frequency to a list of characters that have this frequency. Let `curr` be defined with initial value of maximum frequency. Then while `curr >= 0`, we check:
- If `freq[curr].size() <= 1`, then we are good and update curr -= 1
- If `freq[curr].size() > 1`, then loop over each item starting at index `i = 1` and move it to `max(0, freq[curr - i])` and increment output counter by 1.

Notice we actually do not care the list of characters and all we care about is its side, then we simply let `freq` be a map that maps the frequency to the number of characters that has this frequency.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)