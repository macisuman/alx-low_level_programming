#include <stdio.h>
#include "main.h"
/**
* print_to_98 - prints all integers to 98
* @n: starting integer
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d, \n", n);
			n--;
		}
	}
	else if (n <= 98 && n > 0)
	{
		while (n <= 98 && n > 0)
		{
			printf("%d, \n", n);
			n++;
		}
		else
		{
			printf("%d, \n", n);
		}

}
