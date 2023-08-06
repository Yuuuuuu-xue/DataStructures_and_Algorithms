## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 920  

## Problem
Your music player contains `n` different songs. You want to listen to `goal` songs (not necessarily different) during your trip. To avoid boredom, you will create a playlist so that:
- Every song is played at least once
- A song can only played again only if `k` other songs have been played

Given `n`, `goal`, and `k`, return the number of possible playlists that you can create. Since the answer can be very large, return it modulo `10^9 + 7`

## Example
```
Input: n = 3, goal = 3, k = 1
Output: 6
Explanation: There are 6 possible playlists: [1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1]

Input: n = 2, goal = 3, k = 0
Output: 6
Explanation: There are 6 possible playlists: [1, 1, 2], [1, 2, 1], [2, 1, 1], [2, 2, 1], [2, 1, 2], [1, 2, 2]

Input: n = 2, goal = 3, k = 1
Output: 2
Explanation: There are 2 possible playlists: [1, 2, 1] and [2, 1, 2]
```

## Key Idea
Note, when choosing a song from the playlist, we can either choose an unique song from the playlist or choose a song from previous selected song with `k` constraint. Thus we divide it into two cases when choosing a song and break it into sub problems. Therefore, we will solve this problem via dynamic programming.
- When choosing a song from the playlist, i.e. n, then we will have n different choices, then we need to choose goal - 1 songs from the rest of n - 1 songs.
- When choosing a song from the previous selected songs, we will have n - k different choices because of the k constaint, there will be at most k songs we cannot choose from. Note, n may be < k, thus max(n - k, 0). For each choice, we still need to choose goal - 1 songs from n (not n - 1 since we choose a song from previous selected songs).

Notice for the first choice, it will guarantee every song to play at least once. For the second choice, since we choose to play previosu song, we will choose goal - 1 songs from n, to guarantee every song to play at least once, we need to set a base case where n = 0 and goal = 0, then there is a valid way to choose song. When n > 0 and goal = 0, then there is at least one song not chosen, thus 0.

Thus let `dp[i][j]` represents choosing j songs from i unique songs.

Note:
- `dp[i][j] = 0` initially
- `dp[i][j] = 1` if `i = 0 and j = 0`, no songs to choose from, always a valid playlist i.e. empty playlist
- `dp[i][j] = i * dp[i - 1][j - 1] + max(i - k, 0) * dp[i][j - 1]`

## Complexity Analysis
- Runtime Complexity: O(n * goal)
- Space Complexity: O(n * goal)

## Solution
- [C++](solution.cpp)