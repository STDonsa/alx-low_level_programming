#include <stdlib.h>
#include "main.h"

/**
 * count_word - the helper function to count the number of words in a string
 * @s: the string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, t;

	flag = 0;
	t = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			t++;
		}
	}

	return (t);
}
/**
 * **strtow - funtion splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int d, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (d = 0; d <= len; d++)
	{
		if (str[d] == ' ' || str[d] == '\0')
		{
			if (c)
			{
				end = d;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = d;
	}

	matrix[k] = NULL;

	return (matrix);
}
