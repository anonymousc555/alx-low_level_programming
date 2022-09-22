#include "main.h"

/**
 * *cap_string - Function
 * Description: capitalize strings
 * @x: string
 *
 * Return: Capitalized string
 */
char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', ',', '!', '?', '"', '(', ')', '{', '}' };
	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < leng)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] = s[a] - 32;
			i++;
		}
		a++;

	}
	return (x);
}

