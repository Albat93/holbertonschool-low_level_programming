#include <stdlib.h>
/**
 * print_name - a function prints a name
 * @name: name of function
 * @f: pointer of function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;

	f(name);
}
