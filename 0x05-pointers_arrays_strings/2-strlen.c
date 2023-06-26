#include "main.h"
/**
* _strlen - return the lenght
* @s: the parameter
* Return: the length of an array
*/
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
