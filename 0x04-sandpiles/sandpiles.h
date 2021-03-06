#ifndef __SANDPILES_H__
#define __SANDPILES_H__


#include <stdio.h>
#include <stdlib.h>


void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
static void print_grid(int grid[3][3]);
void topple(int grid1[3][3]);
void test4(int test[3][3], int grid1[3][3]);
int stabilityTest(int grid1[3][3]);

#endif __SANDPILES_H__
