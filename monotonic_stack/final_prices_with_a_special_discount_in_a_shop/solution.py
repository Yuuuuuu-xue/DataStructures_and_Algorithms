from typing import List

class Solution:
    def finalPrices(self, prices: List[int]) -> List[int]:
        mono_stack = []

        for i in range(len(prices) - 1, -1, -1):
            while len(mono_stack) > 0 and mono_stack[-1] > prices[i]: 
                mono_stack.pop()

            original_price = prices[i]
            if len(mono_stack) > 0:
                prices[i] -= mono_stack[-1]

            mono_stack.append(original_price)

        return prices       
