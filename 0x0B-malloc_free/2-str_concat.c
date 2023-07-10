#include "main.h"
#include <stdlib.h>
/**
 * str_concat - program gets ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int s, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = ci = 0;
	while (s1[s] != '\0')
		s++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (s + ci + 1));

	if (conct == NULL)
		return (NULL);
	s = ci = 0;
	while (s1[s] != '\0')
	{
		conct[s] = s1[s];
		s++;
	}

	while (s2[ci] != '\0')
	{
		conct[s] = s2[ci];
		s++, ci++;
	}
	conct[s] = '\0';
	return (conct);
}
