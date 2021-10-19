## Breadth First Search
Click [here](../notes.md) to go back to the notes page.

## Problem
Given an array of integers *arr*, you are initially positioned at the first index of the array. In one step you can jump from index $i$ to index:
- $i + 1$ where $i + 1 <$ arr.length
- $i - 1$ where $i - 1 \geq 0$
- $j$ where $arr[i] == arr[j]$

Return the minimum number of steps to react the **last index** of the array. 

Notice that you can not jump outside of the array at any time.

## Example
```
Input: arr = [100, -23, -23, 404, 23, 23, 23, 3, 404]
Output: 3

Explanation: you need three jumps from index 0 --> 4 --> 3 --> 9. Note that index 9 is the last index of the array.
```

## Key Idea 
We will solve this question via Breadth First Search. So we need to construct our graph and we will use a hash map to do it. Each item in the array will be our node and its neighbours are the item that has the same value. Thus, we can simply loop over each element, use their value to be the key and value to be a list of indices that has this value.

Then we can perform a BFS that we iterate over their neighbours. In addition to that, we can also traverse to $i + 1$ and $i - 1$. If we found that $i + 1 == n$, then we can return the current solution.

For queue, we will first pop out all items in the current queue and store the its all neighbours that we need to search in another queue. This way, we can store the number of steps we need to take to the last index.

## Solution
- [Python Solution](jump_game_IV.py)
