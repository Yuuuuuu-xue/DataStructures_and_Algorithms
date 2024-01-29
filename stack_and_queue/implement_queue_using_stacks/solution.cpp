#include <bits/stdc++.h>

using namespace std;

class MyQueue {
public:
  vector<int> s;

  MyQueue() {
  }
  
  void push(int x) {
    s.push_back(x);
  }
  
  int pop() {
    vector<int> temp;
    while (!s.empty()) {
      temp.push_back(s.back());
      s.pop_back();
    }
    int lastElement = temp.back();
    temp.pop_back();
    while (!temp.empty()) {
      s.push_back(temp.back());
      temp.pop_back();
    }
    return lastElement;
  }
  
  int peek() {
    vector<int> temp;
    while (!s.empty()) {
      temp.push_back(s.back());
      s.pop_back();
    }
    int lastElement = temp.back();
    while (!temp.empty()) {
      s.push_back(temp.back());
      temp.pop_back();
    }
    return lastElement;
  }
  
  bool empty() {
    return s.empty();
  }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */