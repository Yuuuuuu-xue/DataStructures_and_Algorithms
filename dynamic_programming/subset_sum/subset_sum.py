from typing import *


def subset_sum(weights: List[int], weight_limit: int) -> int:
    """
    Return the maximum weight we can get without exceed the weight_limit.
    <weights> is a list of integers we can pick from.
    <weight_limit> is an upper bound
    """
    n = len(weights)
    dp = [[0] * (weight_limit + 1) for _ in range(n + 1)]
    for i in range(1, n + 1):
        for w in range(0, weight_limit + 1):
            # If current weight bound is less than weights[i - 1]
            if w < weights[i - 1]:
                dp[i][w] = dp[i - 1][w]
            else:
                # use the min value
                dp[i][w] = max(dp[i - 1][w], weights[i - 1] + dp[i - 1][w - weights[i - 1]])
    # Final answer, we will use weights from weights[:n] and with a bound weight_limit
    return dp[n][weight_limit]


if __name__ == '__main__':
    test_weights = [2, 3, 4, 2, 11]
    print(5 == subset_sum(test_weights, 5))
    print(9 == subset_sum(test_weights, 10))


