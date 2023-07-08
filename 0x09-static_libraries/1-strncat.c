#include "main.h"
/**
 * _strncat - the function concatenate the two strings
 * using at most n bytes from src
 * @dest: the  entered value
 * @src: the entered value
 * @n: the entered value
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
