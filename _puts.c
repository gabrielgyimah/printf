#include "main.h"

/**
 * _puts - Prints a string to the standard output stream
 * @str: char string
 * Return: num of characters printed
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
