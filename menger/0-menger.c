#include "menger.h"

/*
* void menger(int level);
* int level: level of the Menger Sponge to draw
*/

void menger(int level)
{
	if (level < 0)
		return;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
			{
				for (int k = 0; k < level; k++)
					printf("   ");
			}
			else
			{
				menger(level - 1);
			}
		}
		printf("\n");
	}
}
