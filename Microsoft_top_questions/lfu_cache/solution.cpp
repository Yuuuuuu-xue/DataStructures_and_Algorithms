#include <bits/stdc++.h>

using namespace std;

struct Node {
  int val;
  int freq;
  list<int>::iterator itr;
};

class LFUCache {
private:
  // key -> { val, frequency, iterator to the freq list }
  unordered_map<int, Node> m;
  int capacity;
  int minFreq;
  // frequency -> list of key
  unordered_map<int, list<int>> freq;

public:
  LFUCache(int capacity) {
    minFreq = 0;
    this->capacity = capacity;
  }
  
  int get(int key) {
    if (m.find(key) == m.end()) {
      return -1;
    }

    // Find the key, need to update the map
    // Update the freq, by removing the iterator in O(1)
    freq[m[key].freq ++].erase(m[key].itr);
    // Push the new key into next freq
    freq[m[key].freq].push_back(key);
    // Update the key iterator to be the previous of end iterator (last element iterator)
    m[key].itr = prev(freq[m[key].freq].end());

    // If min freq list is empty, then increment it
    if (freq[minFreq].size() == 0) minFreq ++;
    return m[key].val;
  }
  
  void put(int key, int value) {
    // capacity may be 0
    if (capacity == 0) return;

    // We first call get if the key exists to update the map
    int val = get(key);
    if (val != -1) {
      // Key exist, update its value and we can simply return it since the map size do not exceed the maximum size
      m[key].val = value;
      return;
    }

    // If exceed the capacity
    if (m.size() >= capacity) {
      // Need to remove a key
      auto keyToBeRemoved = freq[minFreq].begin();
      // Remove the key, iterator need to dereference it
      m.erase(*keyToBeRemoved);
      // Remove the frequency as well
      freq[minFreq].erase(keyToBeRemoved);
    }

    // Insert a new key value pair
    freq[1].push_back(key);
    m[key] = {value, 1, prev(freq[1].end())};
    minFreq = 1;
  }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */