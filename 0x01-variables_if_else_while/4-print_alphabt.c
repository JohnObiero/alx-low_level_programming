#include <stdio.h>
#include <ctype.h>

/**
 * main-initialize entry point
 *Declaration:Print all letters except e and q
 *
 * Return: 0
 */

int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets != 'q' && alphabets != 'e')
		{
			putchar(alphabets);
		}
	}
	putchar('\n');
	return (0);
}
