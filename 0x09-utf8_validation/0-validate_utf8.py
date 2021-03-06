#!/usr/bin/python3
'''Validate UTF-8'''


def validUTF8(data):
    '''a method that determines
    if a given data set represents
    a valid UTF-8 encoding.'''
    try:
        bytes([n & 255 for n in data]).decode("UTF-8")
        return True
    except Exception:
        return False
