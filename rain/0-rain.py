#!/usr/bin/python3
"""Given a list of non-negative integers representing
the heights of walls with unit width 1, as if viewing
the cross-section of a relief map, calculate how many
square units of water will be retained after it rains"""


def rain(walls):
    """Calculates how many square units of water will be
    retained after it rains"""
    if not walls or len(walls) < 3:
        return 0

    left_max = [0] * len(walls)
    right_max = [0] * len(walls)

    left_max[0] = walls[0]
    for i in range(1, len(walls)):
        left_max[i] = max(left_max[i - 1], walls[i])

    right_max[-1] = walls[-1]
    for i in range(len(walls) - 2, -1, -1):
        right_max[i] = max(right_max[i + 1], walls[i])

    water_trapped = 0
    for i in range(len(walls)):
        water_trapped += min(left_max[i], right_max[i]) - walls[i]

    return water_trapped
