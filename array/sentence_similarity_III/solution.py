class Solution:
    def areSentencesSimilar(self, sentence1: str, sentence2: str) -> bool:
        arr1 = sentence1.split(" ")
        arr2 = sentence2.split(" ")

        if len(arr1) == len(arr2):
            return sentence1 == sentence2
        
        short = arr1 if len(arr1) < len(arr2) else arr2
        long = arr1 if len(arr1) > len(arr2) else arr2

        # Match prefix
        i = 0
        while i < len(short) and short[i] == long[i]:
            i += 1

        # Match suffix
        j = 0
        while j < len(short) and short[-(j + 1)] == long[-(j + 1)]:
            j += 1

        return i + j >= len(short)


