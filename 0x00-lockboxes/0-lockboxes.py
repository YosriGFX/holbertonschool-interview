#!/usr/bin/python3
'''0-lockboxes'''


def canUnlockAll(boxes):
    ''' Can unlock ? '''
    if type(boxes) != list:
        return False
    if len(boxes) == 0:
        return False
    else:
        length = len(boxes)
    keys = [0]
    for key in keys:
        for value in boxes[key]:
            if value not in keys:
                if value != key and value < length and value != 0:
                    keys.append(value)
    if len(keys) == length:
        return True
    else:
        return False
