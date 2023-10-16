#include <stdio.h>
/**
 * main - Print the alphabet execpt q and e, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
{
	if (az != 'q' && az != 'e')

	putchar (az);
}
{
	putchar ('\n');
}
	return (0);
}
