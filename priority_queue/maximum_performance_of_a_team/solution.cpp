#include <bits/stdc++.h>

using namespace std;
 
class Solution {
public:
	int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
		vector<vector<int>> lst;
		for (int i = 0; i < n; i++) lst.push_back({efficiency[i], speed[i]});
		// Sort by efficiency in decreasing order
		sort(lst.rbegin(), lst.rend());
        int d = 1e9 + 7;

		// Find the max performance
		priority_queue<int> pq;
		long o = 0;
		long currSum = 0;
		for (vector<int>& p : lst) {
            // cout << p[0] << " " << p[1] << "\n";
            // Since max heap
			pq.push(-p[1]);
			currSum += p[1];
			if (pq.size() > k) {
				currSum += pq.top();
				pq.pop();
			}
			o = max(o, currSum * p[0]);
            // cout << currSum << " " << p[0] << " " << p[1] << " " << o << "\n";
		}
		return o % d;
	}
};