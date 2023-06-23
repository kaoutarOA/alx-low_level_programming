#include"main.h"
/**
 * main - A function to check for a digit
 * @c : an integer argument
 * Return: 0 success
 */
int _isdigit(int c)
{
if ( c >= '0' && c <= '9' )
{
return (1);
}
else 
{
return (0);
}
}
