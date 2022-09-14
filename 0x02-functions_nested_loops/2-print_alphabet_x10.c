#include "main.h"

/**
 * print_alphabetx10 - Function
 *
 * Description: prints alphabets 10 times
 *
 * Return: 0
 */
void print_alphabetx10(void)
{
	int line10, az;

	for (line10 = 0; line10 <= 10; line10++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);

			_putchar(line10);
		}
	}
}
