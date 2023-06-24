#include"main.h"
/**
 * main - print number from 0 to 100 except when the num is div by 3 print Fizz
 * or 5 print Buzz or both print FizzBuzz
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}

		if (num == 100)
		{
			printf("\n");
		}
	}

	return (0);
}
