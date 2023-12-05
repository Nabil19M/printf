#include "main.h"
#include <stdarg.h>

/**
 * char_fun - produces output according to the format %c
 * @args: The arguments
 * Return: 1 on success as length of character
 */
int char_fun(va_list args)
{
        char c = va_arg(args, int);

        _putchar(c);
        return (1);
}
