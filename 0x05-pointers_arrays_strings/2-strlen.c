#include "main.h"

/**
 * _strlen - Return the length of string.
 * @str: The string to get the length
 *
 * Return: The length of @str
 */
int _strlen(const char *str)
{
	_strlen length = 0;

	while (*str++)
		length++;

	return (length);
}
