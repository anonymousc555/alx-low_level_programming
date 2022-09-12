#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 *
 * Description: print all possible combination of two two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			putchar(' ');
			
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
