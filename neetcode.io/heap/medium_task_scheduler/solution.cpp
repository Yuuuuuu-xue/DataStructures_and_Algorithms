#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

  int leastInterval(vector<char>& tasks, int n) {
    // Build the frequency map
    unordered_map<char, int> m;
    for (char c : tasks) {
      if (m.find(c) != m.end()) {
        m[c] ++;
      } else {
        m[c] = 1;
      }
    }

    // Build the pq
    priority_queue<int> pq;
    for (auto& pair : m) pq.push(pair.second);

    // Execute all the tasks
    int time = 0;
    while(!pq.empty()) {
      // Round
      int k = n + 1;
      vector<int> uncompleteTasks;
      while (k > 0 && !pq.empty()) {
        int currTask = pq.top();
        pq.pop();
        currTask --;
        if (currTask > 0) uncompleteTasks.push_back(currTask);
        k --;
        // Execute the task
        time ++;
      }

      // Finish one round, push all the uncompleted task back to the priority queue
      for (int task : uncompleteTasks) pq.push(task);

      // If pq is non empty, then k >= 0, which means CPU needs to be idle for k units before executing the next round
      if (!pq.empty()) time += k;
    }

    return time;
  }
};