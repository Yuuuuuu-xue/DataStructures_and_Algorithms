from typing import *


def cut_rod(prices: List[int], n) -> Tuple[int, list]:
    """
    Return a tuple of two items. First item is the optimal price we can sell of the rod with length n.
    The second item is a collection of lengths we will cut on this rod that yields the optimal price.
    """
    # We will use 1 index based
    dp = [0] * (n + 1)
    # We will use this to store the first cut on a length of j
    optimal_cut = [0] * (n + 1)

    for j in range(1, n + 1):
        curr_optimal = float('-inf')
        for i in range(1, j + 1):
            if curr_optimal < (curr_price := prices[i - 1] + dp[j - i]):
                curr_optimal = curr_price
                # Choose first cut to be i
                optimal_cut[j] = i
        dp[j] = curr_optimal

    # Now we need to return the actual solution
    # Notice dp[n] gives us the optimal price
    # And optimal_cut[n] gives us the first cut, then we can find all the cuts.

    # What we will return
    optimal_lengths = []
    optimal_price = dp[n]

    print(optimal_cut)

    # Since n <= 1, we do not need to cut
    pre_len = 0
    while n > 1:
        optimal_lengths.append(optimal_cut[n] + pre_len)
        pre_len += optimal_cut[n]
        n -= optimal_cut[n]
    return optimal_price, optimal_lengths


if __name__ == '__main__':
    test_prices = [5, 7, 10, 13, 17]
    expected_cuts = {1, 2, 3, 4}
    test_n = 5
    actual_output = cut_rod(test_prices, test_n)
    print((25, expected_cuts) == (actual_output[0], set(actual_output[1])))



