## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 948

## Problem
You have an initial power of `power`, an initial score of `0`, and a bag of `tokens` where `tokens[i]` is the value of the `ith` token (0-indexed).

Your goal is to maximize your total score by potentially playing each token in one of two ways:
- If your current power is at least `tokens[i]`, you may play the `ith` token face up, losing `tokens[i]` power and gaining `1` score.
- If your current score is at least `1`, you may play the `ith` token face down, gaining `tokens[i]` power and losing `1` score.

Each token may be played at most once and in any order. You do not have to play all the tokens.

Return the largest possible score you can achieve after playing any number of tokens.

## Example:
```
Input: tokens = [100], power = 50
Output: 0
Explanation: Playing the only token in the bag is impossible because you either have too little power or too little score.

Input: tokens = [100, 200], power = 150
Output: 1
Explanation: Play the 0th token (100) face up, your power becomes 50 and score becomes 1. There is no need to play the 1st token since you cannot play it face up to add to your score.

Input: tokens = [100,200,300,400], power = 200
Output: 2
Explanation: Play the tokens in this order to get a score of 2:
1. Play the 0th token (100) face up, your power becomes 100 and score becomes 1.
2. Play the 3rd token (400) face down, your power becomes 500 and score becomes 0.
3. Play the 1st token (200) face up, your power becomes 300 and score becomes 1.
4. Play the 2nd token (300) face up, your power becomes 0 and score becomes 2.
```

## General Idea:
Let's solve this problem via Greedy algorithm. Let's sort the `tokens` input array and let `i` and `j` be two pointers with initial value `0` and `n - 1`. Then we will try to play the token face up starting from `i` to gain the maximum score. At the end, keep track the maximum score. Then we will try to play the token face down starting from `j` to gain the enough power to play the token face up at index `i`. Then repeat the process. Since we keep track the maximum power, if we end up with smaller score it represents that we can use the stored maximum value and skip some coins.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
