#include "main.h"
/**
 * main - program that prints putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c[] = "Main";
	int i;

	for (i = 0; i < 4; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

