#include "main.h"



/**
 * * _strlen -length of a string
 * @s: A pointer to an int that will be changed/updated
 *
 * Return: void that means our answer is correct
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c)
}
