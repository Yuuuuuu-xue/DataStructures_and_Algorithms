#include <bits/stdc++.h>

using namespace std;

class HitCounter {
private:
  queue<int> q;

public:
  HitCounter() {
    q = queue<int>();
  }
  
  void hit(int timestamp) {
    q.push(timestamp);
  }
  
  int getHits(int timestamp) {
    while (!q.empty() && timestamp - 300 >= q.front()) q.pop();
    return q.size();
  }
};

/**
 * Your HitCounter object will be instantiated and called as such:
 * HitCounter* obj = new HitCounter();
 * obj->hit(timestamp);
 * int param_2 = obj->getHits(timestamp);
 */