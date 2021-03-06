#!/usr/bin/python3
'''minoperations.py'''


def minOperations(n):
    '''a method that calculates
    the fewest number of operations
    needed to result in exactly n H
    characters in the file.'''
    if (
        type(n) is int
    ) and (
        n > 2
    ):
        operations = 0
        const = 3
        while n % 2 == 0:
            operations += 2
            n = n // 2
        while const <= n:
            while n % const == 0:
                operations += const
                n = n // const
            const += 2
        return int(operations)
    else:
        return 0
