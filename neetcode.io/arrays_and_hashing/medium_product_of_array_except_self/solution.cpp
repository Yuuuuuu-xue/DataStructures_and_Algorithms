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
  vector<int> productExceptSelf(vector<int>& nums) {
    vector<int> prefixProduct(nums.size(), 1);
    vector<int> suffixProduct(nums.size(), 1);
    int s = nums.size();

    for (int i = 1; i < s; i++) {
      prefixProduct[i] = prefixProduct[i - 1] * nums[i - 1];
      suffixProduct[s - 1 - i] = suffixProduct[s - i] * nums[s - i];
    }

    for (int i = 0; i < s; i++) prefixProduct[i] *= suffixProduct[i];
    return prefixProduct;
  }
};