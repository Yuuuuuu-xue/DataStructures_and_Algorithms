## LeetCode Problem
Medium 621

## Description
Given a characters array `tasks`, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle.

However, there is a non-negative integer `n` that represents the cooldown period between two same tasks (same letter in the array), that is that there must be at least `n` units of time between two same tasks.

Return the least number of units of time that the CPU will take to finish all the given tasks.

## Example
```
Input: tasks = ["A", "A", "A", "B", "B", "B"], n = 2
Output: 8
Explanation: A -> B -> idle -> A -> B -> idle -> A -> B

Input: tasks = ["A", "A", "A", "B", "B", "B"], n = 0
Output: 6
Explanation: A -> A -> A -> B -> B -> B as one possible way

Input: tasks = ["A", "A", "A", "A", "A", "A", "B", "C", "D", "E", "F", "G"], n = 2
Output: A -> B -> C -> A -> D -> E -> A -> F -> G -> A -> idle -> idle -> A -> idle -> idle -> A as one possible way
```

## Basic Idea
We can solve this problem by using a greedy strategy where from all possible tasks, the CPU will always pick the highest number of tasks to complete first.

Let's define a round to execute `n` unique tasks. After each round, we can execute the same tasks as before. Thus, we can use a priority queue to keep track the number of tasks for each character. Then for each round, we pull out `n` tasks from the heap and execute them, add them back to the priority queue after the round if their number of tasks is greater than 0.

## Complexity Analysis
Let `m` be the number of tasks and `k` be the number of unique tasks where `k <= m`
- Runtime Complexity: O(m + n * lg k + m / n)
  - O(m) to build a frequency map
  - O(n * lg k) to pull n tasks from the heap
  - O(m / n) be the number of rounds
- Space Complexity: O(k)

## Solution
- [C++](./solution.cpp)