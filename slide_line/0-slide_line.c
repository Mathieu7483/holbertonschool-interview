#include <stdlib.h>
#include <stdio.h>
#include "slide_line.h"
/*
* slide_line - slides and merges an array of integers
* into a single line according to the direction specified
* int* line: pointer to the array of integers
* size_t size: number of elements in the array
* int direction: direction to slide the array (0 for left, 1 for right)
* Return: 1 on success, 0 on failure
*/

int slide_line(int *line, size_t size, int direction)
{
  if (!line || size < 1)
        return (0);

    if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
        return (0);

    if (direction == SLIDE_LEFT)
    {
        for (size_t i = 0; i < size; i++)
        {
            if (line[i] == 0)
                continue;

            for (size_t j = i + 1; j < size; j++)
            {
                if (line[j] == 0)
                    continue;

                if (line[i] == line[j])
                {
                    line[i] *= 2;
                    line[j] = 0;
                }
                break;
            }
        }

        size_t index = 0;
        for (size_t i = 0; i < size; i++)
        {
            if (line[i] != 0)
                line[index++] = line[i];
        }
        while (index < size)
            line[index++] = 0;
    }
    else
    {
        for (size_t i = size; i > 0; i--)
        {
            size_t real_i = i - 1;
            if (line[real_i] == 0)
                continue;

            for (size_t j = real_i; j > 0; j--)
            {
                size_t real_j = j - 1;

                if (line[real_j] == 0)
                    continue;

                if (line[real_i] == line[real_j])
                {
                    line[real_i] *= 2;
                    line[real_j] = 0;
                }
                break;
            }
        }

        int index = (int)size - 1;
        for (int i = (int)size - 1; i >= 0; i--)
        {
            if (line[i] != 0)
                line[index--] = line[i];
        }
        while (index >= 0)
            line[index--] = 0;
    }

    return (1);
}
