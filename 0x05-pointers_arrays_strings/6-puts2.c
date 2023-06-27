#include "main.h"
#include "2-strlen.c"
/**
* puts2 - prints certain char of string
* @s: the parameter to be printed
* Return: the demanded  string
*/
void puts2(char *s)
{
int i;
int len;
len = _strlen(s);
for (i = 0; i < len; i += 2)
{
_putchar(s[i]);
}
_putchar('\n');
}
