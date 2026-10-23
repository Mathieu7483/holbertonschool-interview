#!/usr/bin/python3
"""Given a pile of coins of different values, determine
the fewest number of coins needed to meet a given amount total"""


def makeChange(coins, total):

    """Function that determines the fewest number of coins
    needed to meet a given amount total"""
    if total <= 0:
        return 0
    if not coins:
        return -1

    dp = [float('inf')] * (total + 1)
    dp[0] = 0

    for i in range(1, total + 1):
        for coin in coins:
            if i - coin >= 0:
                dp[i] = min(dp[i], dp[i - coin] + 1)

    return dp[total] if dp[total] != float('inf') else -1
