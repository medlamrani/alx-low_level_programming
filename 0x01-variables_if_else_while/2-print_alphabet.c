#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 * only using putchar
 * Return: Always return 0
*/
int main()
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return 0;
}
