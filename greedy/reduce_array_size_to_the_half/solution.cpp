#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int minSetSize(vector<int>& arr) {
    unordered_map<int, int> numToFreq;
    unordered_map<int, vector<int>> freqToNum;
    for (int num : arr) numToFreq[num] ++;
    for (auto p : numToFreq) freqToNum[p.second].push_back(p.first);

    // Greedy choose the highest num
    int currFreq = arr.size();
    int freq = arr.size();
    int o = 0;
    while (currFreq > arr.size() / 2) {
      if (freqToNum[freq].size() > 0) {
        currFreq -= freq;
        // Remove one element
        freqToNum[freq].pop_back();
        o ++;
      } else {
        freq --;
      }
    }
    return o;
  }
};