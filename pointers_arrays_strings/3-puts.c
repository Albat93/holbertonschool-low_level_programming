#include "main.h"

/**
 * _puts - print string to stdout
 * @str: string to be printed
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');

}