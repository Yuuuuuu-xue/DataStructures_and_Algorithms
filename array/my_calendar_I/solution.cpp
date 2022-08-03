#include <bits/stdc++.h>

using namespace std;

class MyCalendar {
private: set<pair<int, int>> s;

public:

  MyCalendar() {
    s = {};
  }
  
  bool book(int start, int end) {
    pair<int, int> newPair = { start, end };

    // First element not less than the given value. If all elements is less than val, then function return the last.
    auto lowerBoundIterator = s.lower_bound(newPair);
    // Vertify the lower bound works
    if (lowerBoundIterator != s.end() && end > (*lowerBoundIterator).first) {
      return false;
    }
    // If have any previous element
    if (lowerBoundIterator != s.begin()) {
      auto prevIterator = prev(lowerBoundIterator);
      if (prevIterator != s.end() && start < (*prevIterator).second) {
        return false;
      }

    }
    s.insert(newPair);
    return true;
  }
};
