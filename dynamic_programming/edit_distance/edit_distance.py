from typing import *


def editDistance(word1: str, word2: str):
    m = len(word1)
    n = len(word2)
    # Index 1 based
    dp = [[0] * (n + 2) for _ in range(m + 2)]

    for i in range(m + 1, 0, -1):
        for j in range(n + 1, 0, -1):
            if i == m + 1 and j == n + 1:
                dp[i][j] = 0
            # Call insert
            elif i == m + 1 and j < n + 1:
                dp[i][j] = 1 + dp[i][j + 1]
            # Call delete
            elif i < m + 1 and j == n + 1:
                dp[i][j] = 1 + dp[i + 1][j]
            else:
                # If they are the same, then no need to use an operation
                if word1[i - 1] == word2[j - 1]:
                    dp[i][j] = dp[i + 1][j + 1]
                # Either call an insert, delete, or replace operation
                else:
                    dp[i][j] = 1 + min(dp[i][j + 1], dp[i + 1][j], dp[i + 1][j + 1])
    return dp[1][1]


if __name__ == '__main__':
    test_word_1 = "horse"
    test_word_2 = "ros"
    print(3 == editDistance(test_word_1, test_word_2))


