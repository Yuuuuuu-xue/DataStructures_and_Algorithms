class Solution:
  def smallestNumber(self, pattern: str) -> str:
    curr = 1
    smallest_number = ""
    i = 0
    n = len(pattern)
    while i <= n:
      if i == n or pattern[i] == 'I':
        # Increasing, simply use curr and increment it
        smallest_number += str(curr)
        curr += 1
        i += 1
      else:
        # Decreasing, use a stack
        stack = []
        while i < n and pattern[i] == 'D':
          stack.append(curr)
          curr += 1
          i += 1
        
        stack.append(curr)
        curr += 1
        
        # pattern[i] == 'I', simply pop everything from stack and push to the smallest_number
        while stack:
          smallest_number += str(stack.pop())
        
        i += 1
        
    return smallest_number
