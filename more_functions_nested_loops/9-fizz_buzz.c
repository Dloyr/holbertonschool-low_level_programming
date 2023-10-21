#include <stdio.h>

int main(void)
{
	int num;

	num = 1;

	while (num <= 100)
	{
		if (num % 15 == 0)
		{
			printf("Fizz Buzz");
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
			printf("%d", num);
		}
		num++;
	}
	printf("\n");
	return (0);
}
