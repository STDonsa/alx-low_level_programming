#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
			{
				n++;
				break;
			}
			else if (accept[d + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
