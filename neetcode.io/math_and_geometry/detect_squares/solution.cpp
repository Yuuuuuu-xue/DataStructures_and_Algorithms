#include <bits/stdc++.h>

using namespace std;

class DetectSquares {
public:
  struct PairHash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);
        return h1 ^ (h2 << 1);
    }
  };

  unordered_map<pair<int, int>, int, PairHash> m;

  DetectSquares() {    
  }
  
  void add(vector<int> point) {
    pair<int, int> p = make_pair(point[0], point[1]);
    if (m.find(p) == m.end()) {
      m[p] = 1;
    } else {
      m[p] ++;
    }
  }
  
  int count(vector<int> point) {
    int o = 0;
    for (auto& p : m) {
      pair<int, int> p2 = make_pair(point[0], p.first.second);
      pair<int, int> p3 = make_pair(p.first.first, point[1]);
      if (
        p.first.first != point[0] &&
        p.first.second != point[1] &&
        abs(point[0] - p.first.first) == abs(point[1] - p.first.second) &&
        m.find(p2) != m.end() &&
        m.find(p3) != m.end()
      ) {
        o += p.second * m[p2] * m[p3];
      }
    }
    return o;
  }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */