#include "slide_line.h"

/**
 * slide_line - slides and merges an array of integer
 * @line: array
 * @size: size_t
 * @direction: int
 * Return: int
 */
int slide_line(int *line, size_t size, int direction)
{
	size_t fPos = 0, sPos = 1;
	size_t firstTmp, secondTmp, oldL, errorFlag = 0;

	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	if (direction == SLIDE_RIGHT)
	{
		fPos = size - 1;
		sPos = size - 2;
	}

	for (firstTmp = 0; firstTmp < size; firstTmp++)
	{
		oldL = sPos;
		errorFlag = 0;
		for (secondTmp = firstTmp + 1; secondTmp < size; secondTmp++)
		{
			if (line[fPos] != 0)
			{
				if (line[sPos] == line[fPos])
				{
					line[fPos] = line[fPos] * 2;
					line[sPos] = 0;
					break;
				}
			}
			if (line[fPos] == 0 && line[sPos] != 0)
			{
				line[fPos] = line[sPos];
				line[sPos] = 0;
				errorFlag = 1;
				sPos = oldL;
				firstTmp--;
				break;
			}

			if (line[sPos] != 0)
				break;
			direction == SLIDE_LEFT ? sPos++ : sPos--;
		}
		if (line[fPos] == 0)
			break;
		if (errorFlag == 0)
		{
			if (direction == SLIDE_LEFT)
			{
				fPos++;
				sPos = fPos + 1;
			}
			else if (direction == SLIDE_RIGHT)
			{
				fPos--;
				sPos = fPos - 1;
			}
		}
	}
	return (1);
}
