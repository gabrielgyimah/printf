#include "main.h"
/**
 * digit - handles the case for d and i specifiers
 * @pin: The value that is being passed
 * Return: an int value
 */

int digit(int pin)
{
	int *store = malloc(sizeof(int) * 10);
	int c, count = 0, b;

	if (pin < 0)
	{
		pin *= -1;
		_putchar('-');
		count++;
	}

	while (pin > 9)
	{
		b = pin % 10;
		*(store + count) = b;
		pin /= 10;
		count++;
	}
	*(store + count) = pin;
	count++;

	for (c = count - 1; c >= 0; c--)
	{
		_putchar(*(store + c) + '0');
	}
	free(store);
	return (count);
}
