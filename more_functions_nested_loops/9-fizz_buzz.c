#include <stdio.h>

/**
 * main - print 0 to 100 with fizz for %3 , buzz for %5
 * FizzBuzz for %15
 *
 * Return: 0
 */

int main(void)
{
	int num;

	num = 1;

	while (num <= 100)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d ", num);
		}
		num++;
		if ( num < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
