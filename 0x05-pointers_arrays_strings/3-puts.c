#include "main.h"
/**
*_puts - function that print a string
*@str: string to define
*Return: Void
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
