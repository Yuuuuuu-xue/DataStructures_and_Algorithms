from typing import List

class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        mono_stack = []
        m = {}
        o = []
        for i, num in enumerate(nums1):
            m[num] = i
            o.append(-1)
        
        for i in range(len(nums2) - 1, -1, -1):
            while len(mono_stack) > 0 and mono_stack[-1] <= nums2[i]:
                mono_stack.pop()
            # All elements in mono_stack is greater than nums2[i]
            if nums2[i] in m and len(mono_stack) > 0:
                # mono_stack[-1] is the next greater element of nums2[i]
                o[m[nums2[i]]] = mono_stack[-1]
            mono_stack.append(nums2[i])
        
        return o
