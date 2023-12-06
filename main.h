#ifndef _MAIN_H
#define _MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
/**
 * struct specifier - Struct format
 *
 * @sp:char pointer of the specifier
 * @f: pointer to function for the conversation specifier
 */
typedef struct specifier
{
	char *sp;
	int (*f)(va_list);
} spec_form;

int _printf(const char *format, ...);
int char_fun(va_list args);
int int_fun(va_list args);
int str_fun(va_list args);
int (*get_fun(char *format))(va_list);
int _putchar(char c);

#endif
