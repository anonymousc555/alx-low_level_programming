#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints alphabet in lower case using cusom header functions
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int a;

	char c[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\n'};

	for (a = 0; a < (int) sizeof(c); a++)
	{
		_putchar(c[a]);
	}
}
