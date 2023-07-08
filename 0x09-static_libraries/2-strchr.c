#include "main.h"
/**
 * _strchr - the entry point
 * @s: input d
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
		int d = 0;

		for (; s[d] >= '\0'; d++)
		{
			if (s[d] == c)
				return (&s[d]);
		}
		return (0);
}
