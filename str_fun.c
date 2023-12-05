#include "main.h"
#include <stdarg.h>

/**
* str_fun - produces output according to the format %s
* @args: The arguments
* Return: 0 on success
*/
int str_fun(va_list args)
{
	char *str = va_arg(args, char*);
	int len = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}
