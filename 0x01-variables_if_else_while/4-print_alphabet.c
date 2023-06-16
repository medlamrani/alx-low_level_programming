#include <stdio.h>
/**
 * main - prints alphabet in lowercase
 * except q and e
 * Return: always return 0
*/

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
		}
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
