import heapq

class Solution:
    def maximumSwap(self, num: int) -> int:
        digit_list = []
        max_heap = []

        for i, c in enumerate(str(num)):
            n = int(c)
            digit_list.append(n)
            # -n since max heap
            max_heap.append((-n, -i))

        heapq.heapify(max_heap)

        should_break = False
        while max_heap and not should_break:
            n, j = heapq.heappop(max_heap)
            max_ele = -n
            max_j = -j

            for i, c in enumerate(digit_list):
                if max_ele > c:
                    # need to swap
                    digit_list[i], digit_list[max_j] = digit_list[max_j], digit_list[i]
                    should_break = True
                    break
                elif max_j == i:
                    break
        
        return int(''.join([str(c) for c in digit_list]))
