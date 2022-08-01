#include <iostream>
#include <vector>
#include <algorithm>
#include <stack> 
#include <unordered_set>
#include <unordered_map>
#include <string> 

using namespace std;

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> m;
    for (string s : strs) {
      // For each character
      vector<int> counter(26, 0);
      for (char c : s) counter[c - 'a'] ++;
      
      // Build the hash code
      string hashCode = "";
      for (int i = 0; i < 26; i++) {
        // Need to > 0 to differentiate for 10 vs 1 and 0
        if (count > 0) {
          hashCode += i + 'a';
          hashCode += to_string(counter[i]);
        }
      }

      // Update the map
      m[hashCode].push_back(s);
    }
    vector<vector<string>> o;
    for (auto pair : m) o.push_back(pair.second);
    return o;
  }
};