#!/usr/bin/python3
"""file that contains the function canUnlockAll that determines
if all the boxes can be opened"""


def canUnlockAll(boxes):
    """function that determines if all the boxes can be opened
    Returns:
        True if all boxes can be opened, else False
    """
    if not isinstance(boxes, list):
        return False
    if len(boxes) == 0:
        return True
    opened = set()
    queue = [0]
    opened.add(0)
    while queue:
        box = queue.pop(0)
        for key in boxes[box]:
            if key not in opened and key < len(boxes):
                opened.add(key)
                queue.append(key)
    return len(opened) == len(boxes)
