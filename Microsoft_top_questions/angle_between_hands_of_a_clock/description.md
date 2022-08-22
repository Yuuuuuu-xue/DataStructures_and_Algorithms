## LeetCode Question
Medium 1344

## Description
Given two numbers, `hour` and `minutes`, return the smaller angle (in degrees) formed between the `hour` and the `minute` hand. Answer within `10^-5` of the actual value will be accepted as correct.

You can assume that `1 <= hour <= 12 and 0 <= minute <= 59`

## Example
```
Input: hour = 12, minutes = 30
Output: 165

Input: hour = 3, minutes = 30
Output: 75
```

## Key Idea
Note that a circle has 360 degree and 60 minutes, thus each minute will take `360 / 60 = 6` degree. Since 12 hours thus each hour will take `360 / 12 = 30` degree. Notice, when we move a minute, the hour hand will also move. When we move 1 minute, hour will move a bit until we react to 60 minute, it will move to the next hour. Thus the degree for minutes `= minutes * 6` and the degree for hours `= (hour % 12 + minutes / 60) * 30`. We mod by 12 here because the angle for 12 hour is 0. Then find the absolute value of the difference and the minimum value between `diff` and `360 - diff` will be the final solution.

## Complexity Analysis
- Time complexity: `O(1)` 
- Space complexity: `O(1)`

## Solution
- [C++](solution.cpp)
