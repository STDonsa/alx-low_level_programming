
#include "main.h"
/**
 * char *_strcpy - the program copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
		int s = 0;
		int d = 0;

		while (*(src + s) != '\0')
		{
			s++;
		}
		for ( ; d < s ; d++)
		{
			dest[d] = src[d];
		}
		dest[s] = '\0';
		return (dest);
}
