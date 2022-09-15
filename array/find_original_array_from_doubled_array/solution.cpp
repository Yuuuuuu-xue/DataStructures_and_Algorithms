#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	vector<int> findOriginalArray(vector<int>& changed) {
		if (changed.size() % 2 != 0) return {};

		sort(changed.begin(), changed.end());
		vector<int> o;
		unordered_map<int, int> m;
		for (int item : changed) m[item] ++;
		
		for (int item : changed) {
			if (m[item] > 0) {
				if (m[item * 2] > 0) {
					o.push_back(item);
					m[item] --;
					m[item * 2] --;
				} else {
					return {};
				}
			}
		}
		return o;
	}
};