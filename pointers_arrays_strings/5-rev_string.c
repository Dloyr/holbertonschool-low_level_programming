#include "main.h"

void rev_string(char *s)
{
	int tab = 0;
	int number = 0;
	int left = 0;
	int right = number - 1;

	while (s[tab] != '\0')
	{
		number++;
		tab++;
	}
	for (tab = left; tab < right; tab++)
	{
		int swap = 0;

		swap = s[tab];
		s[tab] = s[right];
		s[right] = swap;
		right--;
	}
}
