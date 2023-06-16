#include <stdio.h>
/**
 * main - print alphabets in lowercase
 * then in UPPERCASE using only putchar 3 times
 * Result: Always 0 (Success)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
