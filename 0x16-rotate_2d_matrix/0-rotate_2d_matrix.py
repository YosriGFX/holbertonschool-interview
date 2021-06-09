#!/usr/bin/python3
'''Rotate 2D Matrix'''


def rotate_2d_matrix(matrix):
    '''rotate it 90 degrees clockwise'''
    matrix_list = zip(*matrix[::-1])
    new = [list(row) for row in matrix_list]
    matrix.clear()
    for a in new:
        matrix.append(a)
