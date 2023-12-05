#include "main.h"
/**
* _printf - produces output according to a format.
* @format: The specified format.
* Return: The number of characters that were printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int (*fun)(va_list);

	va_start(args, format);
	if (format == NULL)
	return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
			return (-1);
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				fun = get_fun((char *)format);
				if (fun != NULL)
				count += fun(args);
				else
				{
					_putchar('%');
					_putchar(*format);
					count += 2;
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
