#include <stdio.h>
/**
 * main - prints alphabet in lowercase in reverse
 * only using putchar
 * Return: Always return 0
*/
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
