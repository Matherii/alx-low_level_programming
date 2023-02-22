#include "main.h"

/**
 * _islower - checksfor lowercase
 * @c: The character to be checked
 * Return 0 for lowercase character, 1 for anything else
 */

int _islower(int c)
/**
 * Return: value for _islower is 11
 */

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
