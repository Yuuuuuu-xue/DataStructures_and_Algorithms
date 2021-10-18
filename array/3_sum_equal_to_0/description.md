# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
Given an integer array nums, return all the triples $[nums[i], nums[j], nums[k]]$ such that $i \neq j$, $i \neq k$, and $j \neq k$ and $nums[i] + nums[j] + nums[k] == 0$.

## Example:
```
Input: nums = [-1, 0, 1, 2, -1, -4]
Output: [[-1, -1, 2], [-1, 0, 1]]
```

## Key Idea
First of all, we will have a counter that maps the item in the given list to its occurrence. Thus, later on, when we loop over items, we will decrement each item by 1 and prevent the case that $nums[i] > nums[k]$. 
So we have 
```
from collections import defaultdict

m = defaultdict(int)
for item in nums:
    m[item] += 1
```

Then we will need two hash set. One for the output to prevent any duplicate solution. Another one for any items we have visited before.

And we will also need to sort the array to prevent any solution like $(nums[i], nums[j], nums[k])$ and $(nums[i], nums[k], nums[j])$, etc. 

Now, we need to loop over the sorted items. For each item, we decrement its occurrence by one. This item will be our $nums[j]$. Then we loop over items in the visited hash set. This item will be our $nums[i]$ since we have visited it before. Then we check if $-(nums[i] + nums[j])$ is in the hash map. And this item will be our $nums[k]$. If so we also check if $m[nums[k]]$ is greater than 0. This is essential to guarantee that $nums[i] \leq nums[j] \leq nums[k]$. If it is greater than 0, then we add $(nums[i], nums[j], nums[k])$ to the output set. At the end, we can add $nums[j]$ to the visited set. 

## Complexity Analysis
- **Runtime complexity**: $\mathcal{O}(n^2)$ since we loop every item in the sorted items, and we have inner loop that has $\mathcal{O}(n)$ iterations.
- **Space complexity**: $\mathcal{O}(n)$

## Solution
- [Python Solution](3_sum_equal_to_0.py)