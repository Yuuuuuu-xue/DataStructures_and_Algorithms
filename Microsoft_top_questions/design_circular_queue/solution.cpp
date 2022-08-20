#include <bits/stdc++.h>

using namespace std;

class MyCircularQueue {
private:
  queue<int> q;
  int maxSize;
  int lastItem;

public:
  MyCircularQueue(int k) {
    this->maxSize = k;
  }
  
  bool enQueue(int value) {
    if (q.size() < maxSize) {
      q.push(value);
      lastItem = value;
      return true;
    }
    return false;
  }
  
  bool deQueue() {
    if (q.empty()) return false;
    q.pop();
    return true;
  }
  
  int Front() {
    if (q.empty()) return -1;
    return q.front();
  }
  
  int Rear() {
    if (q.empty()) return -1;
    return lastItem;
  }
  
  bool isEmpty() {
    return q.empty();
  }
  
  bool isFull() {
    return q.size() == maxSize;
  }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
