#include"main.h"
/**
 * print_to_98 - print n to 98
 *
 * @n: input
*/

void print_to_98(int n)
{
	int num;
	num = n;
	if (num < 98)
	{
		while (num <= 98)
		{
			printf("%d, ", num);
			num++;
		}
	}
	else if (num > 98)
	{
		while (num >= 98)
		{
			printf("%d, ", num);
			num--;
		}
	}
	else
	{
		printf("%d, ", num);
	}
}
