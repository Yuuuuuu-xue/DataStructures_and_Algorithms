#include <bits/stdc++.h>

using namespace std;

/**
 * This is the robot's control interface.
 * You should not implement it, or speculate about its implementation
 */
class Robot {
  public:
  // Returns true if the cell in front is open and robot moves into the cell.
  // Returns false if the cell in front is blocked and robot stays in the current cell.
  bool move();

  // Robot will stay in the same cell after calling turnLeft/turnRight.
  // Each turn will be 90 degrees.
  void turnLeft();
  void turnRight();

  // Clean the current cell.
  void clean();
};


class Solution {
private:
  vector<pair<int, int>> directions = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

  void traverse(Robot& robot, pair<int, int>& currPos, unordered_set<string>& seen, int currDirectionIndex, string posKey) {
    // cout << currPos.first << " " << currPos.second << "\n";
    robot.clean();
    seen.insert(posKey);

    // Continue to traverse in the same direction
    for (int i = 0; i < 4; i++) {
      int d = (currDirectionIndex + i) % 4;
      while (robot.move()) {
        pair<int, int> newPos = { currPos.first + directions[d].first, currPos.second + directions[d].second };
        string newPosKey = to_string(newPos.first) + " " + to_string(newPos.second);
        if (seen.find(newPosKey) == seen.end()) {
          traverse(robot, newPos, seen, d, newPosKey);
          // After we traverse, we need to backtrack
          // We already move, want to turn back and move back
          robot.turnRight();
          robot.turnRight();
          robot.move();
          // Turn the direction back
          robot.turnRight();
          robot.turnRight();
        } else {
          // We already move, want to turn back and move back
          robot.turnRight();
          robot.turnRight();
          robot.move();
          // Turn the direction back
          robot.turnRight();
          robot.turnRight();
          break;
        }
      } 
      // Backtrack by turning into a new direction
      robot.turnRight();
    }
  }

public:
  void cleanRoom(Robot& robot) {
    unordered_set<string> seen;
    pair<int, int> currPos = {0, 0};
    traverse(robot, currPos, seen, 0, "0 0");
  }
};