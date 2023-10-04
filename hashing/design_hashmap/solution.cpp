#include <bits/stdc++.h>

using namespace std;

class MyHashMap {
public:
  unordered_map<int, int> m;

  MyHashMap() {
      
  }
  
  void put(int key, int value) {
    m[key] = value;
  }
  
  int get(int key) {
    if (m.find(key) == m.end()) {
      return -1;
    }
    return m[key];
  }
  
  void remove(int key) {
    m.erase(key);
  }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */