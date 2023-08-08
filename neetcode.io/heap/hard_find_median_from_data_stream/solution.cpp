#include <bits/stdc++.h>

using namespace std;

class MedianFinder {
public:
  struct Comparator {
    bool operator()(int num1, int num2) {
      return num1 > num2;
    }
  };
  
  // Max heap
  priority_queue<int> p1;
  // Min heap
  priority_queue<int, vector<int>, Comparator> p2;

  MedianFinder() {
  }
  
  void addNum(int num) {
    if (p1.size() > 0 && num <= p1.top()) {
      p1.push(num);
    } else {
      p2.push(num);
    }

    // Make sure two heaps are the same size of p1.size() + 1 == p2.size()
    if (p1.size() > p2.size()) {
      int maxElement = p1.top();
      p1.pop();
      p2.push(maxElement);
    } else if (p1.size() + 1 < p2.size()) {
      int minElement = p2.top();
      p2.pop();
      p1.push(minElement);
    }
  }
  
  double findMedian() {
    // Mid is two elements
    if (p1.size() == p2.size()) {
      return ((double)p1.top() + p2.top()) / 2;
    } else {
      return p2.top();
    }
  }
};