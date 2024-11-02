class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        words = sentence.split(' ')
        # Check last word first
        if words[-1][-1] != words[0][0]:
            return False
        
        for i in range(len(words) - 1):
            if words[i][-1] != words[i + 1][0]:
                return False
        
        return True
