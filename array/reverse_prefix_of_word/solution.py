class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        temp = ''
        for i in range(len(word)):
            temp += word[i]
            if word[i] == ch:
                return temp[::-1] + word[i + 1:]
        return word
