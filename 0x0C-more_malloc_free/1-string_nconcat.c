#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - the funtion concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: the amount of bytes
 *
 * Return: pointer tothe allocated memory
 * if malloc fails,status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s, t, d;

	char *s;

	if (s1 == NULL)
		s = 0;
	else
	{
		for (s = 0; s1[s]; s++)
			;
	}
	if (s2 == NULL)
		t = 0;
	else
	{
		for (t = 0; s2[t]; t++)
			;
	}
	if (t > n)
		t = n;
	s = malloc(sizeof(char) * (s + t + 1));
	if (s == NULL)
		return (NULL);
	for (d = 0; d < s; d++)
		s[d] = s1[d];
	for (d = 0; d < t; d++)
		s[d + s] = s2[d];
	s[s + t] = '\0';
	return (s);
}
