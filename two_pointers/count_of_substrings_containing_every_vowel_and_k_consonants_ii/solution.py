class Solution:
    def countOfSubstrings(self, word: str, k: int) -> int:
        n = len(word)
        vowels = {'a', 'e', 'i', 'o', 'u'}
        
        next_consonants = [0 for _ in range(n)]
        next_consonant_i = n
        # Build the next consonants
        for i in range(n - 1, -1, -1):
            next_consonants[i] = next_consonant_i
            if word[i] not in vowels:
                next_consonant_i = i
        
        # Build the window
        window = {}
        consonants_count = 0
        left = 0


        o = 0

        for right in range(n):
            c = word[right]
            if c in vowels:
                if c not in window:
                    window[c] = 0
                window[c] += 1
            else:
                consonants_count += 1
        
            # Too many consonants in the window
            while consonants_count > k and left <= right:
                c = word[left]
                # print(c, window)
                if c in vowels:
                    window[c] -= 1
                    if window[c] == 0:
                        del window[c]
                else:
                    consonants_count -= 1
                left += 1
        
            # Move the window
            while left <= right and consonants_count == k and len(window) == 5:
                o += next_consonants[right] - right

                c = word[left]
                if c in vowels:
                    window[c] -= 1
                    if window[c] == 0:
                        del window[c]
                else:
                    consonants_count -= 1


                left += 1

        return o