#include"main.h"
/**
 * _isalpha - checks if a letter is both lowercase or uppercase
 * @c: takes input from other functions
 * return: 1 is c if true else 0
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <=90)
		return (1);
	return (0);
}

