## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 726

## Problem
Given a string `formula` representing a chemical formula, return the count of each atom.

The atomic element always starts with an uppercase character, then zero or more lowercase letters, representing the name.

One or more digits representing that element's count may follow if the count is greater than `1`. If the count is `1`, no digits will follow.

For example `"H2O"` and `"H2O2"` are possible but `"H1O2"` is impossible.

Two formulas are concatenated together to produce another formula. For example, `"H2O2He3Mg4"` is also a formula.

A formula placed in parentheses, and a count (optionally added) is also a formula.

For example, `"(H2O2)"` and `"(H2O2)3"` are formulas.

Return the count of all elements are a string in the following form: the first name (in sorted order), followed by its count (if that count is more than `1`), followed by the second name (in sorted order), followed by its count (if that count is more than `1`), and so on.

The test cases are generated so that all the values in the output fit in a 32-bit integer.

## Example
```
Input: formula = "H2O"
Output: "H2O"

Input: formula = "Mg(OH)2"
Output: "H2MgO2"
```

## Key Idea
We will convert the count into a map. Then at the end, we can simply sort the map and build the target output.

Then we can simply loop over the formula and build the map.

If we see:
- an uppercase letter followed by any lowercase letters, then its the next possible atom. We will continue loop over the next character if its between `0` and `9` and calculate the count. If next character is not a numeric character, then it has a count of `1`.
- if we see `(`, we will recurisvely call the funtion with next character and return it when we see `)`, then we store the returned output. If followed by numbers, then loop over the map and multiply its occurrence. At the end, merge the map.
- if we see `)`, we return.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
