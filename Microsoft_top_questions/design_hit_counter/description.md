## LeetCode Question
Medium 362 (Premium)

## Description
Design a hit counter which counts the number of hits received in the past `5` minutes (i.e., the past `300` seconds).

Your system should accept a `timestamp` parameter (in seconds granularity), and you may assume that calls are being made to the system in chronological order (i.e. `timestamp` is monotonically increasing). Several hits may arrive roughly at the same time.

Implement the `HitCounter` class:
- `HitCounter()` initializes the object of the hjit counter system
- `void hit(int timestamp)` records a hit that happened at `timestamp` (in seconds)
- `int getHits(int timestamp)` returns the number of hits in the past 5 minutes from `timestamp` (i.e. the past `300` seconds)

## Example
```
Input:
["HitCounter", "hit", "hit", "hit", "getHits", "hit", "getHits", "getHits"]
[[], [1], [2], [3], [4], [300], [300], [301]]

Output:
[null, null, null, null, 3, null, 4, 3]

Explanation:
HitCounter hitCounter = new HitCounter();
hitCounter.hit(1);
hitCounter.hit(2);
hitCounter.hit(3);
hitCounter.getHits(4); // return 3
hitCounter.hit(300);
hitCounter.getHits(300); // return 4
hitCounter.getHits(301); // return 3
```

## Key Idea
Notice we can assume the timestamp is monotonically increasing, if not then we can use a Fenwick Tree (aka the BIT) to solve this problem. However, with that assumption, let `q` be a queue of hit seconds. Then simply for hit, we push hit number into the `q`. For `getHits`, we check if the top of the queue is out of range (i.e. already `300` seconds passed), then we pop it out. Repeat the process until the top of the queue is within `300` seconds. Then the size of the queue is what we will return.

## Complexity Analysis
- Time complexity: hit will take O(1) and getHits will take O(n)
- Space complexity: O(n) (maintain a queue)

## Solution
- [C++](solution.cpp)
