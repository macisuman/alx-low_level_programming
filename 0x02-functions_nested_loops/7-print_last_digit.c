#include "main.h"
/**
* print_last_digit - printing the last digit of a number
* @n: value of the number
* Return: 0 always
*/

int print_last_digit(int n);
{

	if (n >= 0)
{
	return (n % 10);
}
else
{
return ((n % 10) * -1);
}
}
