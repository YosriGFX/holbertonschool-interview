#!/usr/bin/python3
'''N Queen'''
import sys


def nqueen(row, column):
    solutions = [[]]
    for a in range(row):
        solver_dict = []
        for choice in solutions:
            for b in range(column):
                if (b not in choice)\
                    and all(abs(choice[column] - b) != a - column
                            for column in range(a)):
                    solver_dict.append(choice + [b])
        solutions = solver_dict
    for choice in solutions:
        column = []
        for a, b in enumerate(choice):
            column.append([a, b])
        print(column)


if __name__ == '__main__':
    if len(sys.argv) == 2:
        if sys.argv[1].isdigit():
            queenN = int(sys.argv[1])
            if queenN >= 4:
                nqueen(queenN, queenN)
            else:
                print('N must be at least 4')
                sys.exit(1)
        else:
            print('N must be a number')
            sys.exit(1)
    else:
        print('Usage: nqueens N')
        sys.exit(1)
