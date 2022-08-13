#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
  bool validateSubstring(string s, unordered_map<string, int>m, int i, int wordSize, int totalWords) {
    for (int j = 0;  j < totalWords; j++) {
      string word = s.substr(i, wordSize);
      if (m[word] > 0) m[word] --;
      else return false;
      i += wordSize;
    }
    return true;
  }

public:
  vector<int> findSubstring(string s, vector<string>& words) {
    // Build the map
    unordered_map<string, int> m;
    for (string word : words) m[word] ++;

    vector<int> o;

    int wordSize = words[0].size();
    int totalWords = words.size();
    if (wordSize * totalWords > s.size()) return o;
    for (int i = 0; i <= s.size() - wordSize * words.size(); i++) {
      if (validateSubstring(s, m, i, wordSize, totalWords)) o.push_back(i);
    }
    return o;
  }
};