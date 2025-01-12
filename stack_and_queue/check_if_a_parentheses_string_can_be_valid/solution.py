class Solution:
    def canBeValid(self, s: str, locked: str) -> bool:
        if len(s) % 2 != 0:
            return False

        locked_i = []
        unlocked_i = []

        for i in range(len(s)):
            if locked[i] == '0':
                unlocked_i.append(i)
            elif s[i] == '(':
                locked_i.append(i)
            else:
                if len(locked_i) > 0:
                    locked_i.pop()
                elif len(unlocked_i) > 0:
                    unlocked_i.pop()
                else:
                    return False
        
        if len(locked_i) > len(unlocked_i):
            return False
        
        while locked_i:
            if not unlocked_i:
                return False
            
            if locked_i[-1] > unlocked_i[-1]:
                # We don't have ) thus can return false
                return False
            locked_i.pop()
            unlocked_i.pop()
        
        return True
