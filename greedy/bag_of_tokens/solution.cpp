#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	int bagOfTokensScore(vector<int>& tokens, int power) {
		sort(tokens.begin(), tokens.end());
		int o = 0;
		int p = power;
		int s = 0;
		int i = 0;
		int j = tokens.size() - 1;
		while (i <= j) {
			// Increment the maximum score we can get
      // cout << "a: " << i << " " << j << " " << s << " " << p << "\n";
			while (i <= j && p >= tokens[i]) {
				s ++;
				p -= tokens[i ++];
			}
      // cout << "b: " << i << " " << j << " " << s << " " << p << "\n";
			o = max(o, s);
			// Decrement until we can get the next power
      // s >= 1 since we must have at least 1 score to play down
			while (s >= 1 && i <= j && p < tokens[i]) {
				s --;
				p += tokens[j --];
			}
			// Cannot play down => thus need to exit
			if (i <= j && p < tokens[i]) return o;
			// cout << "c: " << i << " " << j << " " << s << " " << p << "\n";
		}
		return o;
	}
};