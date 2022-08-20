## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
Hard 871

## Problem
A car travels from a starting position to a destination which is `target` miles east of the starting position.

There are gas stations along the way. The gas stations are represented as an array `stations` where `stations[i] = [position_i, fuel_i]` indicates that the `ith` gas station is `position_i` miles east of the starting position and has `fuel_i` liters of gas.

The car starts with an infinite tank of gas, which initially has `startFuel` liters of fuel in it. It uses one liter of gas per one mile that it drives. When the car reaches a gas station, it may stop and refuel, transferring all the gas from the station into the car.

Return the minimum number of refueling stops the car must make in order to reach its destination. If it cannot reach the destination, return `-1`.

Note that if the car reaches a gas station with `0` fuel left, the car can still refuel there. If the car reaches the destination with `0` fuel left, it is still considered to have arrived.

You can assume that `0 <= position_i <= position_i + 1 < target`.

## Example
```
Input: target = 1, startFuel = 1, stations = []
Output: 0
Explanation: we can reach the target without refueling.

Input: target = 100, startFuel = 1, stations = [[10, 100]]
Output: -1

Input: target = 100, startFuel = 10, stations = [[10, 60], [20, 30], [30, 30], [60, 40]]
Output: 2
Explanation:
- We start with 10 liters of fuel
- We drive to position 10, expending 10 liters of fuel. We refuel from 0 liters to 60 liters of gas
- Then we drive from position 10 to position 60 (expending 50 liters of fuel).
- We then drive to and reach the target
We made 2 refueling stops along the way, so we return 2.
```

## Key Idea
We can solve this question via Greedy Algorithm. Our greedy strategy is that when we finish the fuel and did not reach to the target, then we will choose the largest number of liters that we can fill up in the passed stations. Repeat the process until
- we reach to station, then we can return the final solution
- we reach to new station, then we can push the new station in
- we finish all the passed stations and did not reach to station and new stations, then we can return -1 in this case
Note we can use a priority queue in this case to keep track of the maximum of liters of gas we can filled up in the pass station.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution:
- [C++](solution.cpp)
