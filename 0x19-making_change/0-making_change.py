#!/usr/bin/python3
'''Change comes from within'''


def makeChange(coins, total):
    '''determine the fewest number of coins
    needed to meet a given amount total'''
    if total <= 0:
        return 0
    nCoins = 0
    coins = sorted(coins, reverse=True)
    for coin in coins:
        quotient, total = divmod(total, coin)
        nCoins += quotient
        if total == 0:
            return nCoins
    return -1
