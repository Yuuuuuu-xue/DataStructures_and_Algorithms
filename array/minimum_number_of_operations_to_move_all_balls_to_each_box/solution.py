from typing import List

class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        left = [0]

        num_ones = 0
        for i in range(1, len(boxes)):
            # All prev operations to move balls at index i - 1
            num_ops = left[-1]
            # Add one ball if index i - 1 has a ball
            if boxes[i - 1] == '1':
                num_ones += 1
            # Need to move all those balls to index i
            num_ops += num_ones
            left.append(num_ops)
        
        right = [0]
        num_ones = 0
        for i in range(len(boxes) - 2, -1, -1):
            num_ops = right[-1]
            if boxes[i + 1] == '1':
                num_ones += 1
            num_ops += num_ones
            right.append(num_ops)
        
        right = right[::-1]

        ops = []
        for i in range(len(boxes)):
            ops.append(left[i] + right[i])
        return ops

