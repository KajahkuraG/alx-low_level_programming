#include "main.h"

/**
 * string_touper - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */
char *string_touper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\n')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
