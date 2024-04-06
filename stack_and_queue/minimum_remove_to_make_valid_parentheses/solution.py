class Solution:
  def minRemoveToMakeValid(self, s: str) -> str:
    n = len(s)
    stack = []
    lst = list(s)
    for i in range(n):
      if s[i] == '(':
        stack.append(i)
      elif s[i] == ')' and len(stack) > 0:
        stack.pop()
      elif s[i] == ')' and len(stack) <= 0:
        lst[i] = ''

    for i in stack:
      lst[i] = ''
    
    o = ""
    for c in lst:
      o += c
    return o
