from typing import *
from collections import defaultdict


class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        # Convert the prerequisites into a hash map
        pre_req = defaultdict(list)
        for first_item, second_item in prerequisites:
            pre_req[first_item].append(second_item)

        # Visited map, so 0 means undiscovered, 1 means discovered, 2 means fully explored
        visited = {i: 0 for i in range(numCourses)}

        def dfs_traverse(curr):
            visited[curr] = 1
            for neighbour in pre_req[curr]:
                if visited[neighbour] == 1:
                    return False
                elif visited[neighbour] == 0:
                    result = dfs_traverse(neighbour)
                    if not result:
                        return result
            visited[curr] = 2
            return True

        for i in range(numCourses):
            if visited[i] == 0:
                result = dfs_traverse(i)
                if not result:

                    return result
        return True


if __name__ == '__main__':
    s = Solution()
    print(s.canFinish(2, [[1, 0]]))
    print(s.canFinish(2, [[1, 0], [0, 1]]))
    print(s.canFinish(5, [[0, 1], [1, 2], [2, 3], [3, 4]]))
    print(s.canFinish(5, [[0, 1], [1, 2], [2, 3], [3, 4], [4, 0]]))
    print(s.canFinish(5, [[1, 4], [2, 4], [3, 1], [3, 2]]))

