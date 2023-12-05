#include "main.h"

/**
 * get_fun - selects the correct specifier function to perform
 * @format: char specefier.
 * Return: pointer to the function that corresponds to the specifier.
 */
int (*get_fun(char *format))(va_list)
{
        spec_form SP[] = {
                {"c", char_fun},
                {"s", str_fun},
                {"d", int_fun},
                {"i", int_fun},
                {NULL, NULL}
        };
        int i = 0;

        while (i < 8)
        {
                if ((*format) == SP->sp[i])
                {
                return (SP[i / 2].f);
                }
                i++;
        }

        return (NULL);
}
