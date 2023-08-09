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
        for (int j = i; j < candidates.size(); j++) {
          solve(candidates, target, currCandidates, j, curr, combinations);
        }
      }

      // Backtracking
      currCandidates.pop_back();
      curr -= candidates[i];
    }
  } 
  
  vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> combinations;
    vector<int> currCandidates;
    for (int i = 0; i < candidates.size(); i++) {
      solve(candidates, target, currCandidates, i, 0, combinations);
    }
    return combinations;
  }
};