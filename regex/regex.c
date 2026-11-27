#include <stddef.h>
#include "regex.h"

/**
 * regex_match - Checks whether a given pattern matches a given string
 * @str: String to scan (may be empty, no '.' or '*')
 * @pattern: Regular expression pattern (may be empty, supports '.' and '*')
 *
 * Return: 1 if pattern matches str, 0 otherwise
 */
int regex_match(char const *str, char const *pattern)
{
	int first_match;

	if (str == NULL || pattern == NULL)
		return (0);

	if (*pattern == '\0')
		return (*str == '\0');

	first_match = (*str != '\0' && (*pattern == *str || *pattern == '.'));

	if (*(pattern + 1) == '*')
	{
		return (regex_match(str, pattern + 2) ||
			(first_match && regex_match(str + 1, pattern)));
	}

	return (first_match && regex_match(str + 1, pattern + 1));
}
