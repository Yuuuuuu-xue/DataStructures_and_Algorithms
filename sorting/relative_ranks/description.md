## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 506

## Problem
You are given an integer array `score` of size `n`, where `score[i]` is the score of the `ith` athlete in a competition. All the scores are guaranteed to be unique.

The athletes are placed based on their scores, where the `1st` place athlete has the highest score, the `2nd` place athlete has the `2nd` highest score, and so on. The placement of each thlete determine their rank:
- The `1st` place athlete's rank is "Gold Medal"
- The `2nd` place athlete's rank is "Silver Medal"
- The `3rd` place athlete's rank is "Bronze Medal"
- For the `4th` place to the `nth` place athlete, their rank is their placmeent number (i.e. `xth` place athlete's rank is `x`)

Return an array `answer` of size `n` where `answer[i]` is the rank of the `ith` athlete.

## Example
```
Input: score = [5, 4, 3, 2, 1]
Output: ["Gold "Medal", "Silver Medal", "Bronze Medal", "4", "5"]

Input: score = [10, 3, 8, 9, 4]
Output: ["Gold Medal", "5", "Bronze Medal", "Silver Medal", "4"]
```

## Key Idea
Simply bind the score with its index, then sort it from highest score to lowerst score and update the output array. 

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
