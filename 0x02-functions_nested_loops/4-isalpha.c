#include "main.h"
/**
 * _isalpha - Function
 *
 * Description: checks for lower case 
 *
 * Return: 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
