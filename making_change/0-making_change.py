#!/usr/bin/python3
"""Given a pile of coins of different values, determine
the fewest number of coins needed to meet a given amount total"""


def makeChange(coins, total):

    """Function that determines the fewest number of coins needed to meet a given amount total"""
    if total <= 0:
        return 0
    if not coins:
        return -1

    coins.sort(reverse=True)
    count = 0
    for coin in coins:
        while total >= coin:
            total -= coin
            count += 1

    if total > 0:
        return -1

    return count
