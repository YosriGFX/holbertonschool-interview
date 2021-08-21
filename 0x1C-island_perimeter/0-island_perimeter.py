#!/usr/bin/python3
'''0-island_perimeter'''


def island_perimeter(grid):
    '''returns the perimeter of
    the island described in grid'''
    perimeter = 0
    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column] == 1:
                if row - 1 < 0 or grid[row - 1][column] == 0:
                    perimeter += 1
                if row + 1 >= len(grid) or grid[row + 1][column] == 0:
                    perimeter += 1
                if column - 1 < 0 or grid[row][column - 1] == 0:
                    perimeter += 1
                if column + 1 >= len(grid[row]) or grid[row][column + 1] == 0:
                    perimeter += 1
    return perimeter
