#include <bits/stdc++.h>

using namespace std;

class Twitter {
public:
  unordered_map<int, vector<pair<int, int>>> m1;
  unordered_map<int, unordered_set<int>> m2;
  int currNumTweets;

  struct Comparator {
    bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
      return a.first < b.first;
    }
  };

  Twitter() {
    currNumTweets = 0;
  }
  
  void postTweet(int userId, int tweetId) {
    if (m1.find(userId) != m1.end()) {
      m1[userId].push_back(make_pair(currNumTweets, tweetId));
    } else {
      m1[userId] = { make_pair(currNumTweets, tweetId) };
    }
    currNumTweets ++;
  }

  void updatePq(priority_queue<pair<int, int>, vector<pair<int, int>>, Comparator>& pq, int userId) {
    if (m1.find(userId) != m1.end()) {
      for (pair<int, int>& p : m1[userId]) {
        pq.push(p);
      }
    }
  }
  
  vector<int> getNewsFeed(int userId) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, Comparator> pq;
    updatePq(pq, userId);
    if (m2.find(userId) != m2.end()) {
      for (int followeeId : m2[userId]) {
        updatePq(pq, followeeId);
      }
    }

    // Convert the pq to final solution
    vector<int> o;
    while(!pq.empty() && o.size() < 10) {
      o.push_back(pq.top().second);
      pq.pop();
    }

    return o;
  }
  
  void follow(int followerId, int followeeId) {
    if (m2.find(followerId) != m2.end()) {
      m2[followerId].insert(followeeId);
    } else {
      m2[followerId] = { followeeId };
    }
  }
  
  void unfollow(int followerId, int followeeId) {
    if (m2.find(followerId) != m2.end()) {
      m2[followerId].erase(followeeId);
    }
  }
};
