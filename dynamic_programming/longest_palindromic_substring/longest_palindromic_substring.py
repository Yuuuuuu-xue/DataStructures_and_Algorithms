def getLongPalindromicSubstr(word: str) -> str:
    n = len(word)
    # Since index 1 based
    dp = [[1] * (n + 1) for _ in range(n + 1)]

    left = 0
    right = 0

    # Diagonal
    for length in range(1, n + 1):
        for i in range(1, n - length + 1):
            j = i + length
            if word[i - 1] == word[j - 1] and dp[i + 1][j - 1]:
                dp[i][j] = 1
                # Found a longer palindrome
                left = i
                right = j
            # Not a palindrome
            else:
                dp[i][j] = 0

    # Since index 1 based
    return word[left - 1:right]


if __name__ == '__main__':
    test_str_1 = "babad"
    print(getLongPalindromicSubstr(test_str_1) in {"bab", "aba"})

    test_str_2 = "cbbd"
    print("bb" == getLongPalindromicSubstr(test_str_2))


