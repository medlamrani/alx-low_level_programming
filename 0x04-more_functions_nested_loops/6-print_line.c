#include"main.h"
/**
 * print_line - draws a straight line in terminal
 * @n: number of time
*/

void print_line(int n)
{
	int start;

	for (start = 0; start < n; start++)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
		putchar('-');
	}
	putchar('\n');
}
