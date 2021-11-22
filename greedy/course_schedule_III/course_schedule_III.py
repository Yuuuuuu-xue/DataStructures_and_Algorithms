import heapq
from typing import *


class Solution:
    def scheduleCourse(self, courses: List[List[int]]) -> int:
        max_heap = []
        time = 0
        for duration, last_day in sorted(courses, key=lambda x: x[1]):
            # add course to our current time
            time += duration
            heapq.heappush(max_heap, -duration)  # Since heapq is implemented for min heap, we use negative values to invert

            # We remove the previous course that requires the highest duration
            if time > last_day:
                time += heapq.heappop(max_heap)  # Since the value is negative, so we will use +=
        return len(max_heap)


if __name__ == '__main__':
    s = Solution()
    test_courses = [[100,200],[200,1300],[1000,1250],[2000,3200]]
    print(s.scheduleCourse(test_courses) == 3)
    test_courses = [[1,2]]
    print(s.scheduleCourse(test_courses) == 1)
    test_courses = [[3,2],[4,3]]
    print(s.scheduleCourse(test_courses) == 0)
    print(s.scheduleCourse([[7,16],[2,3],[3,12],[3,14],[10,19],[10,16],[6,8],[6,11],[3,13],[6,16]]) == 4)

