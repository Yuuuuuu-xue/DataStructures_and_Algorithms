## LeetCode Problem
Medium 355

## Description
Design a simplified version of Twitter where users can post tweets, follow/unfollow another user, and is able to see the `10` most recent tweets in the user's news feed.

Implement the `Twitter` class:
- `Twitter()` initializes your twitter object
- `void postTweet(int userId, int tweetId)` composes a new tweet with ID `tweetId` by the user `userId`. Each call to this function will be made with a unique tweetId.
- `List<Integer> getNewsFeed(int userId)` retrieves the `10` most recent tweet IDs in the user's news feed. Each item in the news feed must be posted by user followed or by the user themself. Tweets must be ordered from most recent to least recent.
- `void follow(int followerId, int followeeId)` the user with ID `followerId` started following the user with ID `followeeId`.
- `void unfollow(int followerId, int followeeId)` the user with ID `followerId` started unfollowing the user with ID `followeeId`.

## Example
```
Twitter twitter = new Twitter();
twitter.postTweet(1, 5);
twitter.getNewsFeed(1); // [5]
twitter.follow(1, 2);
twitter.postTweet(2, 6);
twitter.getNewsFeed(1); // [6, 5]
twitter.unfollow(1, 2);
twitter.getNewsFeed(1); // [5]
```

## Basic Idea
Let `p = (time, tweetId)` where we can use the total number of tweets to represent the time. Let `m1` be a map that maps the user id to a list of pairs that represents the tweets posted by the user. Let `m2` be a map that maps the user id to a list of user id that represents the followers. Then for the `getNewsFeed`, we can build a priority queue of max heap, then we can basically add all the tweets of the user and its followers into this priority queue and return the final result. 

## Complexity Analysis
For n = number of users and m = number of tweets
- Runtime Complexity:
  - Constructor: O(1)
  - postTweet: O(1)
  - follow: O(1)
  - unfollow: O(1)
  - getNewsFeed: O(m lg m)
- Space Complexity:
  - O(n + m): since we need to store all the tweets under current user and their followers

## Solution
- [C++](./solution.cpp)