## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## LeetCode
Medium 752

## Description
You have a lock in front of you with 4 circular wheels. Each wheel has 10 slots: `'0'`, `'1'`, `'2'`, `'3'`, `'4'`, `'5'`, `'6'`, `'7'`, `'8'`, `'9'`. The wheels  can rotate freely and wrap arounds: for example, we can turn 9 to be '0' or '0' to be '9'. Each move consists of turning one wheel one slot.

The lock initially starts at `'0000'`, a string representing the state of the 4 wheels. You are given a list of `deadends` dead ends, meaning if the lock displays any of these codes, the wheels of the lock will stop turning and you will be unable to open it.

Given a `target` representing the value of the wheels that will unlock the lock, return the minimum total number of turns required to open the lock, or -1 if it is impossible.

## Example
```
Input: deadends = ["0201", "0101", "0102", "1212", "2002"], target = "0202"
Output: 6
Explanation:
A sequence of valid moves would be "0000" -> "1000" -> "1100" -> "1200" -> "1201" -> "1202" -> "0202".
```

## Key Idea
Let `seen` be a set of lock we already visit with initial values of deadends. Then we start with `0000` and we can perform a BFS so that for each step we can turn each digit either up or down. At the end, when we react the target, we can return the number of steps otherwise -1.

## Solution
- [C++](solution.cpp)
