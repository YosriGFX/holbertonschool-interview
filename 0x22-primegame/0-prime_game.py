#!/usr/bin/python3
'''Prime Game'''


def isWinner(x, nums):
    '''determine who the winner of each game is'''
    if type(nums) != list and len(nums) != x:
        return None

    def prime(number):
        '''check if prime'''
        for a in range(2, number):
            if number % a == 0:
                return False
        return True

    def makeTurn(playerC, choices):
        '''play turn'''
        for a in choices:
            if prime(a):
                for b in choices:
                    if b % a == 0:
                        choices.remove(b)
            playerC += 1
            break
        return playerC, choices

    Maria = 0
    Ben = 0
    for rounds in range(x):
        player = 0
        MariaC = 0
        BenC = 0
        choices = [c for c in range(2, nums[rounds] + 1)]
        while choices:
            if player == 0:
                MariaC, choices = makeTurn(MariaC, choices)
                player = 1
            else:
                BenC, choices = makeTurn(BenC, choices)
                player = 0
        if player == 1:
            Maria += 1
        else:
            Ben += 1
    if Maria > Ben:
        return ('Maria')
    elif Ben > Maria:
        return ('Ben')
    else:
        return None
