class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        if obstacleGrid[0][0] == 1 or obstacleGrid[-1][-1] == 1:
            return 0
        obstacleGrid[0][0] = -1
        for i in range(len(obstacleGrid)):
            for j in range(len(obstacleGrid[i])):
                if obstacleGrid[i][j] == 1:
                    continue
                if j >= 1:
                    if obstacleGrid[i][j - 1] != 1:
                        obstacleGrid[i][j] += obstacleGrid[i][j - 1]
                if i >= 1:
                    if obstacleGrid[i - 1][j] != 1:
                        obstacleGrid[i][j] += obstacleGrid[i - 1][j]
        return abs(obstacleGrid[-1][-1])
    