#include "main.h"
#include <stdio.h>
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: pointer value
 * @src: pointer value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
return (dest);
}
