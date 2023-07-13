#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - funtion concatenates n bytes of a string to another string
 * @s1: the string to append to
 * @s2: the string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int s = 0, d = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (s < len1)
	{
		s[s] = s1[s];
		i++;
	}

	while (n < len2 && s < (len1 + n))
		s[s++] = s2[d++];

	while (n >= len2 && s < (len1 + len2))
		s[s++] = s2[d++];

	s[s] = '\0';

	return (s);
}
