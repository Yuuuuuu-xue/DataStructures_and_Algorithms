from typing import List

class Solution:
    def intersectionSizeTwo(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x : x[1])

        largest_num = intervals[0][1]
        second_largest_num = intervals[0][1] - 1

        o = 2

        for i in range(1, len(intervals)):
            a, b = intervals[i]
            
            # print(second_largest_num, largest_num, a, b)

            # We can use intervals
            if a <= second_largest_num and largest_num <= b:
                # Use both nums
                continue
            # Out of the range
            elif largest_num < a:
                # Not possible that second_largest_num > b since we sort by end
                largest_num = b
                second_largest_num = b - 1
                o += 2
            # The case where one of the num is in the range
            else:
                o += 1
                # second_largest_num < a then largest_num <= b
                if second_largest_num < a:
                    if largest_num == b:
                        second_largest_num = largest_num - 1
                    else:
                        second_largest_num = largest_num
                        largest_num = b
                else:
                    # largest_num == a
                    second_largest_num = a 
                    largest_num = b

            # print('o', second_largest_num, largest_num, o)
        return o
