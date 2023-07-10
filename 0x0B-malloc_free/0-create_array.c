#include "main.h"
#include <stdlib.h>
/**
 * create_array - program creates an array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: creates array of size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int s;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);

	for (s = 0; s < size; s++)
		str[s] = c;
	return (str);
}
