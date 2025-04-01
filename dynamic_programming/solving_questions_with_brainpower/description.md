## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2140

## Problem
You are given a 0-indexed 2D integer array `questions` where `querstions[i] = [points_i, brainpower_i]`.

The array describes the questions of an exam, where you have to process the questions in order (i.e. starting from question `0`) and make a decision whether to solve or skip each question. Solving question `i` will earn you `points_i` points but you will be unable to solve each of the next `brainpower_i` questions.

- For example, given `questions = [[3, 2], [4, 3], [4, 4], [2, 5]]`
 - If question `0` is solved, you will earn `3` points but you will be unable to solve questions `1` and `2`
 - If instead, question `0` is skipped and question `1` is solved, you will earn `3` points but you will be unable to solve questions `2` and `3`.

Return the maximum points you can earn for the exam.

## Example
```
Input: questions = [[3, 2], [4, 3], [4, 4], [2, 5]]
Output: 5
Explanation: The maximum points can be earned by solving questions 0 and 3.
```

## Key Idea
For each question `i`, we have two choice:
- Do the question `i`, we earn `points_i`, then we need to skip, we need to skip `brainpower_i` questions, so next question will be `points_i + brainpower_i + 1`
- Skip this question, then we could solve the next question.

We can simply use a dynamic programming to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)