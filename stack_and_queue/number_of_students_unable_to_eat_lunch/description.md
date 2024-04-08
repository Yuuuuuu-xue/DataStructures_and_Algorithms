## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
East 1700

## Problem
The school cafeteria offers circular and square sadwiches at lunch break, referred to by numbers `0` and `1` respectively. All students stand in a queue. Each student either prefers square or circular sandwiches.

The number of sandwiches in the catteria is equal to the number of students. The sandwiches are placed in a stack. At each step:
- If the student at the front of the queue prefers the sandwich on the top of the stack, they will take it and leave the queue
- Otherwise, they will leave it and go the queue's end

This continues until none of the queue students want to take the top sandwich and are thus unable to eat.

You are given two integer arrays `students` and `sandwiches` where `sandwiches[i]` is the type of the `ith` sandwich in the stack and `students[j]` is the preference of the `jth` student in the initial queue. Return the number of students that are unable to eat.

## Example
```
Input: students = [1, 1, 0, 0], sandwiches = [0, 1, 0, 1]
Output: 0

Input: students = [1, 1, 1, 0, 0, 1], sandwiches = [1, 0, 0, 0, 1, 1]
```

## Key Idea
We can have a counter to keep count the student preference. So let `num_circles` be the number of students prefer circular sandwich and `num_squares` be the number of students prefer square sandwich.

Then at the front of the sandwich, we can check if none of students left want to take the top of the stack, then we can return immediately becuase no matter how we move the stack, students will not take this sandwich at the top of the stack.

If there is a student wants to take the sandwich of the top of the stack, we can decrement the counter and pop it from the stack.

## Complexity Analysis
We can reverse the `sanwiches` array so we can pop it with a constant time. Thus
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)