### 0x09. C - Static libraries Foundations - Low-level programming & Algorithm ― Hatching out
<p align="center">
<img src="https://user-images.githubusercontent.com/96126445/160299629-bfe53540-ac0b-476f-9d73-3981461015f5.png" width="300" height ="330">
<p/>
A propos

    What is a static library, how does it work, how to create one, and how to use it
    Basic usage of ar, ranlib, nm

Files & Descriptions

libmy.a static library containing all the functions listed below

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
