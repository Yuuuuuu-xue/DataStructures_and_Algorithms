import heapq
from collections import defaultdict

class NumberContainers:

    def __init__(self):
        self.i_to_num = {}
        self.num_to_heap = defaultdict(list)

    def change(self, index: int, number: int) -> None:
        self.i_to_num[index] = number
        heapq.heappush(self.num_to_heap[number], index)

    def find(self, number: int) -> int:
        while self.num_to_heap[number]:
            i = self.num_to_heap[number][0]
            if self.i_to_num[i] != number:
                heapq.heappop(self.num_to_heap[number])
            else:
                return i
        return -1
        


# Your NumberContainers object will be instantiated and called as such:
# obj = NumberContainers()
# obj.change(index,number)
# param_2 = obj.find(number)
