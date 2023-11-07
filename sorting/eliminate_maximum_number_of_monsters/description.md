## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1921

## Description
You are playing a video game where you are defending your city from a group of `n` monsters. You are given a 0-indexed integer array `dist` of size `n`, where `dist[i]` is the initial distance in kilometers of the `ith` monster from the city.

The monsters walk toward the city at a constant speed. The speed of each monster is given to you in an integer array `speed` of size `n` where `speed[i]` is the speed of the `ith` monster in kilometers per minute.

You have a weapon that, once fully charged, can eliminate a single monster. However, the weapon takes one minute to cahrge. The weapon is fully charged at the very start.

You lose when any monster reaches your city. If a monster reaches the city at the exact moment the weapon is fully charged, it counts as a loss, and the game ends before you can use your weapon.

Return the maximum number of monsters that you can eliminate before you lose, or `n` if you can eliminate all the monsters before they reach the city.

## Example
```
Input: dist = [1, 3, 4], speed = [1, 1, 1]
Output: 3
Explanation:
- Initially, the distance = [1, 3, 4], eliminate the first monster
- Then the distance = [X, 2, 3], eliminate the second monster
- Then the distance = [X, X, 2], eliminate the third monster

Input: dist = [1, 1, 2, 3], speed = [1, 1, 1, 1]
Output: 1
Explanation:
- Initially, the distance = [1, 1, 2, 3], eliminate the first monster
- Then distance = [X, 0, 2, 3], since distance = 0, game ends.
```

## Key Idea
Simply calculate the arrival time for each monster, sort by the arrival time (dist / speed) and eliminate the monster that arrives first. Keep doing it until the monster reaches to you or you eliminate all the monster.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
