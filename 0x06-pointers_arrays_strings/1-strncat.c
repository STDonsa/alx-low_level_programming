#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s;
	int d;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	d = 0;
	while (d < n && src[d] != '\0')
	{
	dest[s] = src[d];
	s++;
	d++;
	}
	dest[s] = '\0';
	return (dest);
}
