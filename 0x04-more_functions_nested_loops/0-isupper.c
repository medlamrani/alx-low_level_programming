#include"main.h"
/**
 * _isupper - checks if a character is upper or lowercase
 *
 * @c: is the character
 *
 * Return: 1 if uppercase, otherwise 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
