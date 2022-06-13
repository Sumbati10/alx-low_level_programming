#include "main.h"

/**
 * rev_string - prints a reverse string
 * @s: A pointer to an int that will be changed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, c, l;
	char *a, aux;

	a = s;

	while (s[c] != '\0')
	{
		c++;
	}

	for (l = 1; l < c; l++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}

