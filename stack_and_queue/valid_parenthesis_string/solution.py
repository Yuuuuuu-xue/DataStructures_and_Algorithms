class Solution:
  def checkValidString(self, s: str) -> bool:
    open_stack = []
    asterisk_stack = []
    for i in range(len(s)):
      if s[i] == '(':
        open_stack.append(i)
      elif s[i] == ')':
        if len(open_stack) <= 0 and len(asterisk_stack) <= 0:
          return False
        elif len(open_stack) <= 0:
          asterisk_stack.pop()
        else:
          open_stack.pop()
      else:
        num_art += 1
    
    # Remove open paraenthesis only if last item in open_stack is before last item in asterisk
    while len(open_stack) > 0 and len(asterisk_stack) > 0:
      if open_stack[-1] < asterisk_stack[-1]:
        # ( and * matches to )
        open_stack.pop()
        asterisk_stack.pop()
      else:
        asterisk_stack.pop()
    
    return len(open_stack) <= 0
