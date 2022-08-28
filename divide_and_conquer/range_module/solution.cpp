#include <bits/stdc++.h>

using namespace std;

class RangeModule {
private:
  map<int, int> m;

public:
  RangeModule() {
    m.clear();
  }
  
  void addRange(int left, int right) {
    removeRange(left, right);
    // Insert it directly
    m[left] = right;
    
    // Insertion point
    auto itr = m.find(left);

    // Check the left side
    if (itr != m.begin() && prev(itr)->second == left) {
      prev(itr)->second = right;
      itr = prev(itr);
      m.erase(left);
    }

    // Check the right side
    if (itr != m.end() && next(itr)->first == itr->second) {
      itr->second = next(itr)->second;
      m.erase(next(itr)->first);
    }
      
    // cout << "add range: " << left << " " << right << "\n";
    // for (auto& p : m) {
    //     cout << "[" << p.first << ", " << p.second << ") ";
    // }
    // cout << "\n\n";
    
  }
  
  bool queryRange(int left, int right) {
    auto itr = m.upper_bound(left);
    // cout << "query range: " << bool(itr == m.begin()) << " " << bool(itr == m.end()) << " " << itr->first << "\n\n";
    if (itr == m.begin()) return false;
    itr = prev(itr);
    return itr->second >= right;   
  }
  
  void removeRange(int left, int right) {
    // Find the lower bound and move backward
    auto itr = m.lower_bound(left);
    if (itr != m.begin()) itr --;

    // Loop over to the right and update the range
    while (itr != m.end() && itr->first < right) {
      if (itr->first < left && itr->second > left) {
        int temp = itr->second;
        itr->second = left;
        // New interval
        if (temp > right) {
          m[right] = temp;
        }
      } else if (itr->first >= left) {
        auto nextItr = next(itr);
        // we should cut the itr left
        if (itr->second > right) {
          m[right] = itr->second;
        }
        m.erase(itr->first);
        itr = nextItr;
        continue;
      }
      itr ++;
    }
    // cout << "remove range: " << left << " " << right << "\n";
    // for (auto& p : m) {
    //     cout << "[" << p.first << ", " << p.second << ") ";
    // }
    // cout << "\n\n";
  }
};