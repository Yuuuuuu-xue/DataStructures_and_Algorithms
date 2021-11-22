from typing import *


class Solution:
    def checkIfPrerequisite(self, numCourses: int, prerequisites: List[List[int]], queries: List[List[int]]) -> List[bool]:
        dp = [[float('inf')] * numCourses for _ in range(numCourses)]

        for i, j in prerequisites:
            dp[i][j] = 0

        # FloydWarshall algorithm
        for k in range(numCourses):
            for i in range(numCourses):
                for j in range(numCourses):
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j])

        # Check if query is true of not
        return [dp[i][j] < float('inf') for i, j in queries]


if __name__ == '__main__':
    s = Solution()
    print(s.checkIfPrerequisite(2, [[1, 0]], [[0, 1], [1, 0]]) == [False, True])
    print(s.checkIfPrerequisite(2, [], [[1, 0], [0, 1]]) == [False, False])
