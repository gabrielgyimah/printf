#include <unistd.h>

/**
 * _putchar - prints a single character
 * @c: parameter the character to be printed
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
