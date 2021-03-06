#include "sandpiles.h"

/**
 * print_grid - print_grid
 * @grid: int
 */
static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * stabilityTest - stabilityTest
 * @grid1: int
 * Return: int
 */
int stabilityTest(int grid1[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	for (j = 0; j < 3; j++)
	if (grid1[i][j] > 3)
		return (1);
	return (0);
}

/**
 * test4 - test4
 * @test: int
 * @grid1: int
 * Return: none
 */
void test4(int test[3][3], int grid1[3][3])
{
	int i = 0, j = 0;

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
			if (grid1[i][j] > 3)
			{
				grid1[i][j] -= 4;
				test[i][j] = 1;
			}
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
			if (test[i][j] == 1)
			{
				if ((i - 1) >= 0)
					grid1[i - 1][j] += 1;
				if ((j - 1) >= 0)
					grid1[i][j - 1] += 1;
				if ((j + 1) < 3)
					grid1[i][j + 1] += 1;
				if ((i + 1) < 3)
					grid1[i + 1][j] += 1;
			}
}

/**
 * topple - topple
 * @grid1: grid
 *
 * Return: grid
 */
void topple(int grid1[3][3])
{
	int k = 0, i = 0, j = 0;
	int test[3][3] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};
	if (stabilityTest(grid1))
	{
		printf("=\n");
		print_grid(grid1);
	}
	test4(&(*test), &(*grid1));
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
			if (grid1[i][j] > 3)
				k = 1;
	if (k == 1)
		topple(&(*grid1));
}

/**
 * sandpiles_sum - sandpile_sum
 * @grid1: grid
 * @grid2: grid
 *
 * Return: nothing
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; ++i)
		for (j = 0; j < 3; ++j)
			grid1[i][j] += grid2[i][j];
	topple(&(*grid1));
}
