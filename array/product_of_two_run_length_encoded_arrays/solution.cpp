#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<vector<int>> findRLEArray(vector<vector<int>>& encoded1, vector<vector<int>>& encoded2) {
    vector<vector<int>> o;
    int i = 0;
    int j = 0;
    int curr_freq_i = 0;
    int curr_freq_j = 0;
    while (i < encoded1.size() && j < encoded2.size()) {
      if (curr_freq_i == 0) curr_freq_i = encoded1[i][1];
      if (curr_freq_j == 0) curr_freq_j = encoded2[j][1];

      int min_freq = min(curr_freq_i, curr_freq_j);
      curr_freq_i -= min_freq;
      curr_freq_j -= min_freq;
      // Calculate the product
      int product = encoded1[i][0] * encoded2[j][0];
      // Accumulate the freq
      if (o.size() > 0 && o.back()[0] == product) {
        o.back()[1] += min_freq;
      } else {
        o.push_back({ product, min_freq });
      }

      // Update i or j
      if (curr_freq_i == 0) i++;
      if (curr_freq_j == 0) j++;
    }
    return o;
  }
};