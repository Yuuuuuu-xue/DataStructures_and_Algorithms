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
  vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freqMap;
    unordered_map<int, vector<int>> freqToNumsMap;

    for (int num : nums) freqMap[num] ++;
    for (auto pair : freqMap) freqToNumsMap[pair.second].push_back(pair.first);
    
    vector<int> o;
    int currFreq = nums.size();
    while (k > 0) {
      if (freqToNumsMap.find(currFreq) != freqToNumsMap.end()) {
        o.insert(o.end(), freqToNumsMap[currFreq].begin(), freqToNumsMap[currFreq].end());
        k -= freqToNumsMap[currFreq].size();
      }
      currFreq --;
    }
    return o;
  }
};