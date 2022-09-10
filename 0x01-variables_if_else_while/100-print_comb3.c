#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: prints combination of two numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 8; num1++)
	{
		putchar((num1 % 10) + '0');
		if (num1 == 8)
			break;
	}
	for (num2 = 1; num2 <= 9; num2++)
	{
		putchar((num2 % 10) + '0');
		if (num2 == 9)
			break;
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
