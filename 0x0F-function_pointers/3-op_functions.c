#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
*op_add - Sum
*@a: Var type integer
*@b:var type integer
*Return: return result.
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - soustract
*@a: var type integer
*@b:var type integer
*Return: return result.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiply numb
*@a: var type integer
*@b:var type integer
*Return: return result.
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - divide numb
*@a: var type integer
*@b:var type integer
*Return: return result.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a / b);
}

/**
*op_mod - modulo
*@a: var type integer
*@b:var type integer
*Return: return result.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
