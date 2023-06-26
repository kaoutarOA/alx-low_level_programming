#include "main.h"
/**
*swap_int -> a function to switch 2 integer
*@a: pointer to a to be updated
*@b: pointer to b to be updated
*/
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
