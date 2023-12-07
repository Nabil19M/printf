#include "main.h"
#include <stdio.h>
/**
 * bin_fun - Converts a number from base 10 to binary
 * @args: List of arguments passed to this function
 * Return: The length of the number printed
 */
int bin_fun(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char bin_string[33] = {0};
	int len = 0;
	int i;

	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	while (num)
	{
		bin_string[len] = (num & 1) ? '1' : '0';
		len++;
		num >>= 1;
	}
		bin_string[0] = '\0';
	for (i = len - 1; i >= 0; i--)
		_putchar(bin_string[i]);
	return (len);
}
