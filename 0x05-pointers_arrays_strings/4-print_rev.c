#include "main.h"
#include "2-strlen.c"
/**
* print_rev - prints a string in reverse
* followed by a new line
* @s: string
*/
void print_rev(char *s)
{
int i, len;
len = _strlen(s);
i = len - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
