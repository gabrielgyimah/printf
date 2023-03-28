#include "main.h"
#include <stdio.h>

int main()
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	int num = -5937, num2 = -67;
	
	len += _printf("Holy God, King of the world\n");
	len2 += printf("Holy God, King of the world\n");
	len += _printf("%d\n", num2);
	len2 += printf("%d\n", num2);
	len += _printf("%i\n", num);
	len2 += printf("%i\n", num);
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	 _printf("Length:[%d, %i]\n", len, len);
	 printf("Length:[%d, %i]\n", len2, len2);
	 _printf("Negative:[%d]\n", -762534);
	 printf("Negative:[%d]\n", -762534);
	 _printf("Unsigned:[%u]\n", ui);
	 printf("Unsigned octal:[%o]\n", ui);
	 _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	 printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	 printf("Address:[%p]\n", addr);
	 len = _printf("Percent:[%%]\n");
	 len2 = printf("Percent:[%%]\n");
	
	printf("%d\n", len);
	printf("%d\n", len2);
	
	return 0;
}
