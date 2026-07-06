#!/usr/bin/python3
"""Write a method that determines if a given data
set represents a valid UTF-8 encoding."""


def validUTF8(data):
    """Determines if a given data set represents a valid UTF-8 encoding.

    Args:
        data (list): A list of integers representing the data set.

    Returns:
        bool: True if the data set is a valid UTF-8 encoding, False otherwise.
    """
    num_bytes = 0
    byte = byte & 0xFF

    for byte in data:
        if num_bytes == 0:
            if (byte >> 5) == 0b110:
                num_bytes = 1
            elif (byte >> 4) == 0b1110:
                num_bytes = 2
            elif (byte >> 3) == 0b11110:
                num_bytes = 3
            elif (byte >> 7):
                return False
        else:
            if (byte >> 6) != 0b10:
                return False
            num_bytes -= 1

    return num_bytes == 0
