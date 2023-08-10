## LeetCode Problem
Hard 332

## Description
You are given a list of airline `tickets` where `tickets[i] = [fromi, toi]` represent the departure and the arrival airports of one flight. Reconstruct the itinerary in order and return it.

All of the tickets belong to a man who departs from `JFK`, thus the itinerary must begin with `JFX`. If there are multiple valid itineraries, you should return the itnerary that has the smallest lexical order where read as a single string.
- For example, the itinerary `["JFK", "LGA"]` has a smaller lexical order than `["JFK", "LGB"]`.

You may assume all tickets from at least one valid itinerary. You must use all the ticket once and only once.

## Example
```
Input: tickets = [["MUC","LHR"],["JFK","MUC"],["SFO","SJC"],["LHR","SFO"]]
Output: ["JFK","MUC","LHR","SFO","SJC"]

Input: tickets = [["JFK","SFO"],["JFK","ATL"],["SFO","ATL"],["ATL","JFK"],["ATL","SFO"]]
Output: ["JFK","ATL","JFK","SFO","ATL","SFO"]
Explanation: Another possible reconstruction is ["JFK","SFO","ATL","JFK","ATL","SFO"] but it is larger in lexical order.
```

## Basic Idea
First of all, we will need to build a graph that maps the airports to next the airports with a ticket. Then for each airport, we sort the possible airports that we can arrive to achieve the lexcal order constraint.

Since we can assume that there is at least one valid itinerary, then suppose we start with JFX and we can arrive to LGA or LGB. Then we must have another ticket from LGA back to JFX or a ticket from LGB back to JFX. 

We may have a graph:
JFX <--> LGA
 |
 v
LGB

Two possible ways:
1) JFX -> LGA -> JFX -> LGB
2) JFX -> LGB, -> GLA -> JFX

It is still fine, we can use a recursion, the base case is that we don't have tickets at the current airport, then we append the airport to the output array, in both cases, it will be `LGB`. Then we can try to explore another path (which must end up with `JFX`) and we can traverse `JFX -> LGB`.

We can pop the airport from the adj list to guarnatee we use only one ticket. Since we want to traverse the smallest airport first, we need to sort the adj list from largest to smallest, so we can use `pop` method to pop the smallest airport in constant time.

Then simply use a recursion, if the airport is the last airport, we can push it to the output array. If not, then we pop every airport from the adj list, and then apply it with the recursion. At the end, we append current airport to the output array. Note, this array is in reverse order thus we need to reverse the array at the end.

## Complexity Analysis
- Runtime Complexty: O(E lg E) since we may need to sort all the edges
- Space Complexity: O(E)

## Solution
- [C++](./solution.cpp)