#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: use putchar to print alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
		putchar("%d\n");
	}
	return (0);
}
