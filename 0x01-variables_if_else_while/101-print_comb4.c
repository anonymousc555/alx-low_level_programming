#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Descriprion - Print combination of three numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 7; num1++)
	{
		for (num2 = num1 + 1; num2 <= 8; num2++)
		{
			for (num3 = num2 + 1; num3 <= 9; num2++)
				if (num1 == num2 && num2 == num3 && num3 == num1)
					break;
			putchar((num1 % 10) + '0');
			putchar((mum2 % 10) + '0');
			putchar((num3 % 10) + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}