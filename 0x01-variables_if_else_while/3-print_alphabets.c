#include <stdio.h>
/**
 * main - print alphabets in lowercase
 * then in UPPERCASE
 * Return: Always return 0
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
