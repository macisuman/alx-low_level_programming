#include "main.h"
#include <stdio.h>
/**
* main - C level programming
* Return: Always 0 (success)
*/

int main(void)
{
	char i[9] = "_putchar";
	int n = 0;

	for (n = 0; n < 8; n++)
{
	putchar(i[n]);
}
putchar('\n');
return (0);
}
