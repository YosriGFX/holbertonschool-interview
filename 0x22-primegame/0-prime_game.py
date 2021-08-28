#!/usr/bin/python3
'''Prime Game'''


def isWinner(x, nums):
    '''determine who the winner of each game is'''
    Maria = 0
    Ben = 0
    for rounds in range(x):
        player = 0
        choices = [c for c in range(1, nums[rounds] + 1)]
        if len(choices) == 1:
            Ben += 1
        else:
            benC = []
            mariaC = []
            while choices:
                if len(choices) == 1:
                    if player == 0:
                        mariaC.append(1)
                        choices.remove(1)
                    else:
                        benC.append(1)
                        choices.remove(1)
                for c in choices[1:]:
                    if player == 0:
                        for a in choices:
                            if a % c == 0:
                                mariaC.append(a)
                                choices.remove(a)
                        player = 1
                    else:
                        for a in choices:
                            if a % c == 0:
                                benC.append(a)
                                choices.remove(a)
                        player = 0
            if player == 1:
                Ben += 1
            else:
                Maria += 1
    if Maria > Ben:
        return ('Maria')
    else:
        return ('Ben')
