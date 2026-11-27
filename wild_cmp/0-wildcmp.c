#include "holberton.h"

/**
 * wildcmp - Compares two strings where s2 can contain '*' wildcards
 * @s1: First string to compare
 * @s2: Second string, possibly containing '*' characters
 *
 * Return: 1 if strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1))
			return (1);
		if (*s1 != '\0')
			return (wildcmp(s1 + 1, s2));
		return (0);
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
