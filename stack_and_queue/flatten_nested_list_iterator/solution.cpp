#include <bits/stdc++.h>

using namespace std;

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 */
class NestedInteger {
public:
  // Return true if this NestedInteger holds a single integer, rather than a nested list.
  bool isInteger() const;
  // Return the single integer that this NestedInteger holds, if it holds a single integer
  // The result is undefined if this NestedInteger holds a nested list
  int getInteger() const;

  // Return the nested list that this NestedInteger holds, if it holds a nested list
  // The result is undefined if this NestedInteger holds a single integer
  const vector<NestedInteger> &getList() const;
};

class NestedIterator {
public:
  vector<pair<NestedInteger, int>> stack;

  NestedIterator(vector<NestedInteger> &nestedList) {
    for (int i = nestedList.size() - 1; i >= 0; i--) {
      stack.push_back(make_pair(nestedList[i], 0));
    }
  }
  
  int next() {
    while (!stack.empty()) {
      pair<NestedInteger, int> p = stack.back();
      stack.pop_back();
      if (p.first.isInteger()) {
        return p.first.getInteger();
      } else {
        // p is a list
        if (p.second < p.first.getList().size()) {
          stack.push_back(make_pair(p.first, p.second + 1));
          stack.push_back(make_pair(p.first.getList()[p.second], 0));
        }
        return next();
      }
    }
    return -1;
  }
  
  bool hasNext() {
    while (!stack.empty()) {
      pair<NestedInteger, int> p = stack.back();
      stack.pop_back();
      if (p.first.isInteger()) {
        // Since we do not want to pop
        stack.push_back(make_pair(p.first, 0));
        return true;
      } else {
        // p is a list
        if (p.second < p.first.getList().size()) {
          stack.push_back(make_pair(p.first, p.second + 1));
          stack.push_back(make_pair(p.first.getList()[p.second], 0));
        }
        return hasNext();
      }
    }
    return false;
  }
};
/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */