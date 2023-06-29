#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input parameter string
 * @src: input parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int f;
	int g;

	f = 0;

	while (dest[f] != 0)
	{
		f++;
	}

	g = 0;

	while (src[g] != 0)
	{
		dest[f] = src[b];
		f++;
		g++;
	}
	return (dest);
}
