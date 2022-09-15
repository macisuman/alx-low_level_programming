#include <stdio.h>
/**
* main -finding and printing out the sum total of the multiples of five
* Return: always returns zero to my satifaction
*/

#int main(void)
{
	int num = 0, sum;

	while (num < 1024)
	{
		num++;
		if (num % 5 == 0 || num % 3 == 0)
		{
			sum += num;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
