#include "main.h"
/**
 * _strlen - returns the lenth of a string
 * @s: string
 * Return: returns length;
 */
int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
