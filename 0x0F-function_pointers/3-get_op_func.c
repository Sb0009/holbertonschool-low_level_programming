
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
*get_op_func -  function selected
*@s: Var type integer
*@s: function pointer that takes a int argument.
*Return: return result.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i;

	i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);

}
