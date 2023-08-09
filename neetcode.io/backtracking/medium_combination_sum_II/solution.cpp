#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
  void solve(vector<int>& candidates, int target, vector<int>& currCandidates, int i, int curr, vector<vector<int>>& combinations) {
    if (candidates[i] + curr <= target) {
      currCandidates.push_back(candidates[i]);
      curr += candidates[i];
      
      // Find a valid combination
      if (curr == target) {
        combinations.push_back(currCandidates);
      } else {
        // Try other possible combinations
        for (int j = i + 1; j < candidates.size(); j++) {
          // Previous item is the same and nums did not include that number
          // 1, 2, 2, 2, we don't want to many 1, 2, 2
          if (candidates[j] != candidates[j - 1] || j == i + 1) {
            solve(candidates, target, currCandidates, j, curr, combinations);
          }
        }
      }

      // Backtracking
      currCandidates.pop_back();
      curr -= candidates[i];
    }
  } 
  
  vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> combinations;
    vector<int> currCandidates;
    for (int i = 0; i < candidates.size(); i++) {
      if (i == 0 || candidates[i] != candidates[i-1]) {
        solve(candidates, target, currCandidates, i, 0, combinations);
      }
    }
    return combinations;
  }
};