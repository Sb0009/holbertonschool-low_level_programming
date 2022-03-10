#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_int - print int  va_list
 * @list: va_list passed to function
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_char - print_ char type element from va_list
 * @list: va_list passed to function
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_string - print_string element from va_list
 * @list: va_list passed to function
 */
void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_float - print_float type element from va_list
 * @list: va_list passed to function
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
