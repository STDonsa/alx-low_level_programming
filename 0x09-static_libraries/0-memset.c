#include "main.h"
/**
 * _memset - Program fills a block of memory with a certain value
 * @s: starting address of memory to be filled
 * @b: desired value.
 * @n: number of bytes to be changed.
 *
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int d = 0;

	for (; n > 0; d++)
	{
		s[d] = b;
		n--;
	}
	return (s);
}
