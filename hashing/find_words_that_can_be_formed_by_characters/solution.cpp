#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int countCharacters(vector<string>& words, string chars) {
    unordered_map<char, int> m;
    for (char c : chars) {
      if (m.find(c) == m.end()) {
        m[c] = 1;
      } else {
        m[c] ++;
      }
    }

    int o = 0;
    for (string& word : words) {
      unordered_map<char, int> currM;
      
      bool shouldUpdate = true;
      for (char c : word) {
        if (currM.find(c) == currM.end()) {
          currM[c] = 1;
        } else {
          currM[c] ++;
        }

        if (m.find(c) == m.end() || m[c] < currM[c]) {
          shouldUpdate = false;
          break;
        }
      }

      if (shouldUpdate) {
        o += word.size();
      }
    }

    return o;
  }
};