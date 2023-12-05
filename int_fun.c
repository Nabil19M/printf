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
	int count = 0;
	unsigned int num;
	int d = 1;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		num = n * -1;
	}
	else
	{
		num = n;
	}

	while (num / d > 9)
	{
		d *= 10;
	}

	while (d != 0)
	{
		_putchar(num / d + '0');
		count++;
		num %= d;
		d /= 10;
	}
	return (count);
}
