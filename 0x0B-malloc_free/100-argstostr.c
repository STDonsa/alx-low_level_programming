#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int s, t, d = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (s = 0; s < ac; s++)
	{
		for (t = 0; av[s][t]; t++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (s = 0; s < ac; s++)
	{
	for (t = 0; av[s][t]; t++)
	{
		str[d] = av[s][t];
		d++;
	}
	if (str[d] == '\0')
	{
		str[d++] = '\n';
	}
	}
	return (str);
}
