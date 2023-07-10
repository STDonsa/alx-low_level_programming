#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - program duplicates to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int s, r = 0;

	if (str == NULL)
		return (NULL);
	s = 0;
	while (str[s] != '\0')
		s++;
	aaa = malloc(sizeof(char) * (s + 1));

	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
