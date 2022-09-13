#include "main.h"

/**
 * main-printing alphabet in lower case 10 times
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
char i = 10;

while (i <= 9)
{
char c = 'a';
while (c <= 'z')
{
	_putchar(c);
	c++;
}
_putchar('\n');
i++;
	}
}

