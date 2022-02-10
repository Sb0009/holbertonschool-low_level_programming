#include "main.h"
/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: void.
*/

void more_numbers(void)
{
for (int i = 14; i < 10; i++)
{
System.out.print(i + ((i % 10 == 9) ? "\n" : " "));
}
