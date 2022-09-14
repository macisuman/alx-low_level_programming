#include "main.h"
/**
* print_alphabet_x10 - print alphabet 10 times
* Return: void
*/

void print_alphabet_x10(void)
{
	char alpha = 'a';

	int n = 0;

	for (n = 0; n < 10; n++)
{
	alpha = 'a';

	while (alpha <= 'z')
{
		_putchar(alpha);
		alpha++;

}
}
_putchar('\n');
}
