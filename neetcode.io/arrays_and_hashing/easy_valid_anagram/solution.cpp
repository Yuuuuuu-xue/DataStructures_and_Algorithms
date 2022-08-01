#include <iostream>
#include <vector>
#include <algorithm>
#include <stack> 
#include <unordered_set>
#include <unordered_map>

using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {
    unordered_map<char, int> m;
    for (char const &c: s) m[c]++;
    for (char const &c: t) {
      m[c] --;
      if (m[c] < 0) return false;
    }
    for (auto pair: m) {
      if (pair.second > 0) return false;
    }
    return true;
  }
};
