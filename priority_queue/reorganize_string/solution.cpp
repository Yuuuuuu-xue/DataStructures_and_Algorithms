#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string reorganizeString(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
      if (freq.find(c) == freq.end()) {
        freq[c] = 1;
      } else {
        freq[c] ++;
      }
    }

    priority_queue<pair<int, char>> pq;
    for (auto &p : freq) {
      pq.push(make_pair(p.second, p.first));
    }

    string output = "";
    while (!pq.empty()) {
      pair<int, char> topElement = pq.top();
      output.push_back(topElement.second);
      pq.pop();
      
      if (pq.empty()) {
        if (topElement.first > 1) {
          return "";
        }
        return output;
      }

      pair<int, char> secondElement = pq.top();
      output.push_back(secondElement.second);
      pq.pop();

      if (topElement.first > 1) {
        pq.push(make_pair(topElement.first - 1, topElement.second));
      }

      if (secondElement.first > 1) {
        pq.push(make_pair(secondElement.first - 1, secondElement.second));
      }
    }

    return output;
  }

};