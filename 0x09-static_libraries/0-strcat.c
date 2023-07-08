#include "main.h"
/**
 *  _strcat - function that concatenates the two strings
 *  @dest: the entered value s
 *  @src: the entered value d
 *
 *  Return: void
 */
char *_strcat(char *dest, char *src)
{
		int s;
		int d;

		s = 0;
		while (dest[s] != '\0')
		{
			s++;
		}
		d = 0;
		while (src[d] != '\0')
		{
			dest[s] = src[d];
			s++;
			d++;
		}
		dest[s] = '\0';
		return (dest);
}
