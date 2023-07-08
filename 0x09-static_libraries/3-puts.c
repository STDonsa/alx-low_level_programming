#include "main.h"
#include<stdio.h>
/**
 * _puts - program prints string to stdout
 * @str: string tobe printed
 *
 * _putchar printa new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
