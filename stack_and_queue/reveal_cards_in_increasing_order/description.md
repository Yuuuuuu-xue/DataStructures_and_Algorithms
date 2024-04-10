## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 950

## Problem
You are given an integer array `deck`. There is a deck of cards where every card has a unique integer. The integer on the `ith` card is `deck[i]`.

You can order the deck in any order you want. Initially, all the cards start face down (unrevealed) in one deck.

You will do the following steps repeatedly until all cards are revealed:
1. Take the top card of the deck, reveal it, and take it out of the deck
2. If there are still cards in the deck then put the next top card of the deck at the bottom of the deck
3. If there are still unrevealed cards, go back to step 1. Otherwise, stop.

Return an ordering of the deck that would reveal the cards in increasing order.

Note that the first entry in the answer is considered to be the top of the deck.

## Example
```
Input: deck = [17, 13, 11, 2, 3, 5, 7]
Output: [2, 13, 3, 11, 5, 17, 7]
Explanation:
We get the deck in the order [17,13,11,2,3,5,7] (this order does not matter), and reorder it.
After reordering, the deck starts as [2,13,3,11,5,17,7], where 2 is the top of the deck.
We reveal 2, and move 13 to the bottom.  The deck is now [3,11,5,17,7,13].
We reveal 3, and move 11 to the bottom.  The deck is now [5,17,7,13,11].
We reveal 5, and move 17 to the bottom.  The deck is now [7,13,11,17].
We reveal 7, and move 13 to the bottom.  The deck is now [11,17,13].
We reveal 11, and move 17 to the bottom.  The deck is now [13,17].
We reveal 13, and move 17 to the bottom.  The deck is now [17].
We reveal 17.
Since all the cards revealed are in increasing order, the answer is correct.
```

## Key Idea
We want to basically reverse the order of operations, so we have a list of `[17, 13, 11, 7, 5, 3, 2]` that is sorted in reverse order since the reveal order should be in an increasing order.

Now, we reveal 17. Thus cards before: `[17]`
Then we reveal 13 and move 17 to the bottom. Thus cards before: `[13, 17]`.
Now, we reveal 11 and move 17 to the bottom. Thus cards before: `[11, 17, 13]`.
Now, we reveal 7 and move 13 to the bottom. Thus cards before: `[7, 13, 11, 17]`

Notice the pattern: whenever we push an item to the list, we pop the last item in the back and push it the front. This suggests us to sort the input array and use a deque structure to solve this problem since it provides a constant operation time to popback/push to front and back!

## Complexity Analaysis
- Time Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)