## Hashing
Click [here](../notes.md) to go back to the notes page.

## Question
You are given an integer array ```nums``` and an integer ```k```.

In one operation, you can pick two numbers from the array whose sum equals ```k``` and remove them from the array.

Return the *maximum* number of operations you can perform on the array.

## Example
```
Input: nums = [1, 2, 3, 4], k = 5
Output: 2
Explanation:
  Starting with the nums [1, 2, 3, 4]
  Remove numbers 1 and 4, then nums = [2, 3]
  Remove numbers 2 and 3, then nums = []
  There are no more pairs that sum up to 5, hence a total of 2 operations.
```

## Key Idea
Since there can be duplicate numbers. We can use a hash map that maps the numbers to its occurance. Then simply loop over ```nums```. We check if ```nums - k``` is in the hash map and its occurrance is > 0, if so, we found one pair and update its occurrance = occurrance - 1. If it is not in the hash map, we increment map[num] by 1 or initialize to a value of 1 if not exist in the hash map. 

## Solution
- [Java Solution]