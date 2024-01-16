#include <bits/stdc++.h>

using namespace std;

class RandomizedSet {
public:
  unordered_set<int> s;

  RandomizedSet() {
  }
  
  bool insert(int val) {
    if (s.find(val) == s.end()) {
      s.insert(val);
      return true;
    }
    return false;
  }
  
  bool remove(int val) {
    if (s.find(val) == s.end()) {
      return false;
    }
    s.erase(val);
    return true;
  }
  
  int getRandom() {
    int n = s.size();
    int i = rand() % n;
    return *next(s.begin(), i);
  }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */