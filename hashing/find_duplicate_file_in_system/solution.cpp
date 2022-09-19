#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
	vector<vector<string>> findDuplicate(vector<string>& paths) {
		unordered_map<string, vector<string>> m;
		for (string& p : paths) {
			istringstream iss(p);
			string item;
			string dir;
			getline(iss, dir, ' ');
			while (getline(iss, item, ' ')) {
				int bracketIndex = item.find('(', 0);
        // cout << item.substr(bracketIndex + 1, item.size() - bracketIndex - 2) << " " << (dir + '/' + item.substr(0, bracketIndex)) << "\n";
				m[item.substr(bracketIndex + 1, item.size() - bracketIndex - 2)].push_back(dir + '/' + item.substr(0, bracketIndex));
			}
		}
    vector<vector<string>> o;
		for (auto& p : m) {
			if (p.second.size() > 1) o.push_back(p.second);
		}
		return o;
	}
};