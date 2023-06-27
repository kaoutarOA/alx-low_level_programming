#include "main.h"
#include "2-strlen.c"
/**
* puts_half - prints second half of string
* @str: the parameter to be printed
* Return: the demanded  string
*/
void puts_half(char *str)
{
int i;
int n;
int len;
len = _strlen(str);
n = (len - 1) / 2;
for (i = n + 1; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
