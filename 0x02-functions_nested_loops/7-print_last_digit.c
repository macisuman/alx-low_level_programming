#include "main.h"
/**
* print_last_digit - printing the last digit of a number
* @n: value of the number
* Return: 0 always
*/

int print_last_digit(int n)
{
	int new = n % 10;

	if (n < 0)

	new = new * -1;

	_putchar(new + '0');

	return (new);

}
