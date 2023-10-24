#include "main.h"

void rev_string(char *s)
{
	int tab = 0;
	int number = 0;
	int left = 0;
	int right = 0;

	while (s[tab] != '\0')
	{
		number++;
		tab++;
	}
	right = number - 1;

	for (tab = left; tab < right; tab++)
	{
		int swap = 0;

		swap = s[tab];
		s[tab] = s[right];
		s[right] = swap;
		right--;
	}
}
