#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  double angleClock(int hour, int minutes) {
    int minutesAngle = minutes * 6; // since 360 / 60 = 6
    double hoursAngle = (hour % 12 + minutes / 60.0) * 30; // since 360 / 12 = 30
    double diff = abs(hoursAngle - minutesAngle);
    return min(diff, 360 - diff);
  }
};