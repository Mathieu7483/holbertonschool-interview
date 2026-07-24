#include "menger.h"

/**
 * is_empty - checks if a given position in the Menger Sponge is empty
 * @row: the row index of the position
 * @col: the column index of the position
 *
 * Return: 1 if the position is empty, 0 otherwise
 */

static int is_empty(int row, int col)
{
	while (row > 0 || col > 0)
	{
		if (row % 3 == 1 && col % 3 == 1)
			return (1);
			row /= 3;
			col /= 3;
	}
	return (0);
}

/*
* void menger(int level)- draws a Menger Sponge of a given level
* @level: level of the Menger Sponge to draw
*/

void menger(int level)
{
		int size, row, col;

		if (level < 0)
			return;

		size = pow(3, level);
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				if (is_empty(row, col))
					printf(" ");
				else
					printf("#");
			}
			printf("\n");
		}
}
