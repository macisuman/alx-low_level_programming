#include "main.h"
/**
* print_alphabet - print alphabet 10 times
* return: void
*/

void print_alphabet_x10(void)
{
	char alpha = 'a';

	int n = 0;

	for (n = 0; n <= 9; n++)
	{

	while (alpha <= 'z')
{
		_putchar(alpha);
		alpha++;

}
}
_putchar('\n');
}
