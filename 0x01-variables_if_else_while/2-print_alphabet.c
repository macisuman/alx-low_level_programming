#include <stdio.h>
/**
*main - learning the hard way
*Return: always 0 (success)
*/
int main(void)
{
	char hamza = 'a';

	while (hamza <= 'z')
	{
		putchar(hamza);
		hamza++;
	}
	putchar(10);
	return (0);
}
