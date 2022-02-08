#include "main.h"

/**
 * _isalpha - define if its a character alphabetic.
* @c: charater to be tested
** Return: - 1 if c is an alphabet otherwise 0 if not.
*/

int  _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
