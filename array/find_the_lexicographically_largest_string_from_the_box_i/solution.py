class Solution:
    def answerString(self, word: str, numFriends: int) -> str:
        o = ""
        if numFriends  == 1:
            return word
        len_ = len(word) - numFriends + 1

        for i in range(len(word)):
            o = max(o, word[i:i+len_])
        return o
