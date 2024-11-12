## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2070

## Problem
You are given a 2D integer array `items` where `items[i] = [price_i, beauty_i]` denotes the price and beauty of an item respectively.

You are also given a 0-indexed integer array `queries`. For each `queries[j]`, you want to determine the maximum beauty of an item whose price is less than or equal to `queries[j]`. If no such item exists, then the answer to this query is `0`.

Return an array `answer` of the same length as `queries` where `answer[j]` is the answer to the `jth` query.

## Examples:
```
Input: items = [[1, 2], [3, 2], [2, 4], [5, 6], [3, 5]], queries = [1, 2, 3, 4, 5, 6]
Output: [2, 4, 5, 5, 6, 6]
Explanation:
- For queries[0] = 1, [1, 2] is the only item which has price <= 1, hence the answer for this query is 2.
- For queries[1] = 2, [1, 2] and [2, 4] are available, maximum beauty among them is 4
- For queries[2] = 3 and queries[3] = 4, the items which can be considered are [1, 2], [3, 2], [2, 4], and [3, 5]. The maximum beauty among them is 5
- For queries[4] = 5 and queries[5] = 6, all items can be considered. Hence, the answer for them is the maximum beauty of all items, i.e. 6
```

## Key Idea
We can simply sort the the items by price and sort the queries by price.

Then, we can loop over the query from smallest query to largest query price, and loop over the price array to find the maximum possible beauty array. 

Note, we don't have to loop over price array every time when we want to answer a query because a query depends on the prev query (smaller price) + new item with higher price <= curr price.

## Complexity Analysis
- Runtime Complexity: O(n lg n + m lg m)
- Space Complexity: O(m) since need to construct the query array with index

## Solution
- [Python](./solution.py)