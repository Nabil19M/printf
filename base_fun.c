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
	int len = 1;
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (len);
	}
	while (num)
	{
		bin_string[len] = (num & 1) ? '1' : '0';
		len++;
		num >>= 1;
	}
	bin_string[0] = '\0';
	for (i = len; i >= 0; i--)
		_putchar(bin_str[i]);
	return (len - 1);
}
