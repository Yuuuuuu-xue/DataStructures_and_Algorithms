## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeedCode Question
1710 Easy

## Problem
You are assigned to put some amount of boxes onto **one truck**. You are given a 2D array ```boxTypes```, where ```boxTypes[i] = [numberOfBoxes_i, numberOfUnitsPerBox_i]```:
- ```numberOfBoxes_i``` is the number of boxes of type ```i```
- ```numberOfUnitsPerBox_i``` is the number of units in each box of the type ```i```

You are also given an integer ```truckSize```, which is the **maximum** number of **boxes** that can be put on the truck. You can choose any boxes to put on the truck as long as the number of boxes does not exceed ```truckSize```.

Return the **maximum** total number of **units** that can be put on the truck.

## Example
```
Input: boxTypes = [[1, 3], [2, 2], [3, 1]], truckSize = 4
Output: 8

Input: boxTypes = [[5, 10], [2, 5], [4, 7], [3, 9]], truckSize = 10
Output: 91
```

## Solution:
- [TypeScript](./maximum_units_on_a_truck.ts)
