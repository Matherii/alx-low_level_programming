#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *Return: 0 for alphabetic character or 1 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
