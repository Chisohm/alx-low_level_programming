#include <stdio.h>
#include <ctype.h>

/**
 * main - print if the number is positive, zero, or negative
 *
 * Return: 0
 */

int main(void)
{
	int lowerCase = 'a';

	while  (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}

