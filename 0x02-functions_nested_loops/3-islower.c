#include "main.h"

/**
 * _islower - to check function of lowercase character
 * @c: ls the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
