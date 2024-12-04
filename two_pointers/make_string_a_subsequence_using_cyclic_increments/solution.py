class Solution:
    def canMakeSubsequence(self, str1: str, str2: str) -> bool:
        j = 0

        for i in range(len(str1)):
            if j >= len(str2):
                return True
            if str1[i] == str2[j] or chr((ord(str1[i]) + 1 - ord('a')) % 26 + ord('a')) == str2[j]:
                j += 1
        
        return j >= len(str2)
