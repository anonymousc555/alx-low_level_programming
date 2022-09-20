#include "main.h"

/**
 * _strlen - Return the length of string.
 * @str: The string to get the length
 *
 * Return: The length of @str
 */
_strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
