## Hashing
Click [here](../notes.md) to go back to the notes page.

## Question
An underground railway system is keeping track of customer travel times between different stations. They are using this data to calculate the average time it takes to travel from one station to another.

Implement the `UndergroundSystem` class:
- `void checkIn(int id, string stationName, int t)`
  - A customer with a card ID equal to `id`, checks in at the station `stationName` at time `t`.
  - A customer can only be checked into one place at a time.
- `void checkOut(int id, string stationName, int t)`
  - A customer with a card ID equal to `id`, checks out from the station `stationName` at time `t`.
- `double getAverageTime(string startStation, string endStation)`
  - Returns the average time it takes to travel from `startStation` to `endStation`
  - The average time is computed from all the previous traveling times from `startStation` to `endStation` that happened directly, meaning a check in at `startStation` followed by a checkout from `endStation`
  - The time it takes to travel from `startStation` to `endStation` may be different from the time it takes to travel from `endStation` to `startStation`
  - There will be at least one customer that has traveled from `startStation` to `endStation` before `getAverageTime` is called.

You may assume all calls to the `checkIn` and `checkOut` methods are consistent. If a customer checks in at time `t1` then checks out at time `t2`, then `t1 < t2`. All events happen in chronological order.

You may assume all the strings consist of uppercase and lowercase English letters and digits.

## Example
```
UndergroundSystem undergroundSystem = new UndergroundSystem();
undergroundSystem.checkIn(45, "Leyton", 3);
undergroundSystem.checkIn(32, "Paradise", 8);
undergroundSystem.checkIn(27, "Leyton", 10);
undergroundSystem.checkOut(45, "Waterloo", 15); // Customer 45 "Leyton" -> "Waterloo"
undergroundSystem.checkOut(27, "Waterloo", 20); // Customer 27 "Leyton" -> "Waterloo"
undergroundSystem.checkout(32, "Cambridge", 22); // Customer 32 "Paradise" -> "Cambridge"
undergroundSystem.getAverageTime("Paradise", "Cambridge"); // return 14.0
undergroundSystem.getAverageTime("Leyton", "Waterloo"); // return 11.0
undergroundSystem.checkIn(10, "Leyton", "Waterloo"); // 11
undergroundSystem.getAverageTime("Leyton", "Waterloo"); // return 11.0
undergroundSystem.checkOut(10, "Waterloo", 38); // Customer 10 "Leyton" -> "Waterloo"
undergroundSystem.getAverageTime("Leyton", "Waterloo"); // return 12.0
```

## Key Idea
Notice customers may start at the same station and end with different stations. And customers may end up with same station but start with different stations. Thus, we will use two hashmap to store the information we need. Let `m1` be the map that maps the customer ID to a pair `(startStationName, startTime)`. And let `m2` be the map that maps the hash key of two stations name to a pair of integer `(sum, len)`. Note since we can assume all strings only consist of uppercase and lowercase English letters and digits, we can concatenate two stations name with a space as a separator.

When we call `checkIn`, we will just update `m1`. When we call `checkOut`, we can use the customer ID to get the information we need to update `m2`.

## Complexity Analysis
- Runtime Complexity:
  - checkIn: O(1)
  - checkOut: O(1)
  - getAverageTime: O(1)

- Space Complexity:
  - checkIn: O(1)
  - checkOut: O(1)
  - getAverageTime: O(1)

The overall space complexity for the UndergroundSystem instance will be O(n) since we will need two hashmap.

## Solution
- [C++](solution.cpp)