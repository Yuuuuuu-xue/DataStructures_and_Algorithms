#include <bits/stdc++.h>

using namespace std;

class MyStack {
private:
  queue<int> q;

public:

  MyStack() {}
  
  void push(int x) {
    q.push(x);
  }
  
  int pop() {
    int s = q.size();
    while ((s--) > 1) {
      int x = q.front();
      q.pop();
      q.push(x);
    }
    int topElement = q.front();
    q.pop();
    return topElement;
  }
  
  int top() {
    int currElement;
    int s = q.size();
    while (s--) {
      currElement = q.front();
      q.pop();
      q.push(currElement);
    }
    return currElement;
  }
  
  bool empty() {
    return q.size() == 0;
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */