#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a;

	a = '0';
	while
		(a < 10)
		{
			char c;

			c = 'a';
			while
				(c <= 'z')
				{
					_putchar(c);
					c++;
				}
			a++;
		}
	_putchar('\n');
}
