#!/usr/bin/python3
'''0-island_perimeter'''


def island_perimeter(grid):
    '''returns the perimeter of
    the island described in grid'''
    cells = 0
    for row in grid:
        for column in row:
            if column == 1:
                cells += 1
    return ((cells * 1) * 2) + 2
