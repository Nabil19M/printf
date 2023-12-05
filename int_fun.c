#include "main.h"
#include <stdarg.h>
#include <math.h>
/**
* int_fun - produces output according to a format %d or %i
* @args: The arguments
* Return: 0 on success
*/
int int_fun(va_list args)
{
	int n = va_arg(args, int);
	char buffer[11];
	int len = 0;
	unsigned int num;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
		len++;
	}
	else
		num = n;

	while (num)
	{
		buffer[len++] = '0' + num % 10;
		num /= 10;
	}
	for (i = len - 1 ; i >= 0; i--)
		_putchar(buffer[i]);
	return (len);
}
