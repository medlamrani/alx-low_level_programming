#include "main.h"
/**
 * main -Entry Point
 * Description: print _putchar.
 * Return: Always 0.
*/
int main(void)
{
	char mot[] = "_putchar";
	int let=0;

	while(let < 8)
	{
		_putchar(mot[let]);
		let++;
	}
	_putchar("\n");

	return(0);
}
