# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 165

## Problem
Given two version numbers `version1` and `version2`, compare them.

Version numbers consist of one or more revisions joined by a dot `.`. Each revision consists of digits and may contain leading zeros. Every revision contains at least one character. Revisions are 0-indexed from left to right, with the leftmost revision being revision 0, the next revision being revision 1, and so on. For example, `2.5.33` and `0.1` are valid version numbers.

To compare version numbers, compare their revisions in left-to-right order. Revisions are compared using their integer value ignoring any leading zeros. THis means that revisions `1` and `001` are considered equal. If a version number does not specify a revision at an index, then treat the revision as `0`. For example, version `1.0` is less than version `1.1` because their reversion 0s are the same but hteir revision 1s are `0` and `1` respectively, and `0 < 1`.

Return the following:
- If `version1 < version2`, return `-1`
- If `version1 > version2`, return `1`
- Otherwise return `0`

## Example:
```
Input: version1 = "1.01", version2 = "1.001"
Output: 0
Explanation: Ignoring leading zeroes, they are the same.

Input: version1 = "0.1", version2 = "1.1"
Output: -1
```

## Key Idea
Simply split the version by `.`. Then note version1 = "1.0" is same as version 2 = "1". We can simply append `0` to the splited list until two arrays have the same length.

Then simply loop over each element, convert them into integer and compare.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
