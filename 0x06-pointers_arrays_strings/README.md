Standard Library for String Functions

#include <string.h> "main.h"  header file contains many functions , some are listed below:


strlen(s1): Returns length of string s1. It excludes the null character that is ‘\0’.

strlwr(s1): It converts the string s1 to lowercase.

strcat(s1,s2): Inserts a copy of string s2 to the end of s1 and dump s1 with a null and returns s1.

strcmp(s1,s2): This function compares s1 and s2 and returns negative if s1<s2, positive if s1>s2, 0 if s1=s2.

strcpy(s1,s2): It copies the s2 string into the s1 string, and modifies the s1 string.

strupr(s1): It converts the string s1 into uppercase.

strstr(s1,s2): This function returns a pointer to the first occurrence of the s2 string in the s1 string.

strrev(s1): It returns the reverse string of the s1 string.

Strings and Pointers

 --------------------------------------- An array of characters is known as String. ---------------------------------------------


The string name is the constant pointer to the string.

Pointers can be used to point the strings but this same pointer can be used to point somewhere else. Therefore pointer is not a constant pointer.

Array of Strings
The collection in the table of strings is called an Array of strings.
Use of Pointers in an array of strings: Although, we know that the array strings are not equal in length. Thus instead of assigning a fixed length to each string, Moreover we can  use a pointer to a string of varying length. This is the use of pointers in an array of strings.




