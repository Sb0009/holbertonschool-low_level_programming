#include "main.h"

/**
*/


int wildcmp(char *s1, char *s2)

{
while (*s1 && *s2 && *s1 == *s2)
{
++s1;
++s2;
}
return (1);
}

int wildcmp2(char *s1, char  *s2)

{	  
*s2 = ('*');	 
if(s2 != 0 || !*s1)	   
return (0);
return (0);
}
