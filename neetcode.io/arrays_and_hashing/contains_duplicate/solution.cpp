#include <iostream>
#include <vector>
#include <algorithm>
#include <stack> 
#include <unordered_set>

using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    return set(nums.begin(), nums.end()).size() != nums.size();
  }
};
