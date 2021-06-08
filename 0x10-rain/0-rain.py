#!/usr/bin/python3
'''Rain File'''


def rain(walls):
    '''rain function'''
    if len(walls) > 0:
        water = 0
        length = len(walls)
        for a in range(length):
            left = walls[a]
            for b in range(a):
                left = max(left, walls[b])
            right = walls[a]
            for b in range(a + 1, length):
                right = max(right, walls[b])
            water += (min(left, right) - walls[a])
        return water
    else:
        return 0
