#include "function_pointers.h"

/**
 * print_name - name func calling
 * @name:  string
 * @f: function ptr with strg in argument
 */

void print_name(char *name, void (*f)(char *))
{
if (f && name)
		f(name);
}
